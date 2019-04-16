#include<iostream>
#include<stack>
#include<cstdio>

using namespace std;

int main()
{
	stack<int> s;
	int n;
	char c;
	bool fir = true;
	c = getchar();
	n = c - '0';
	for (int i = 0; i<3; i++) {
		s.push(n % 2);
		n /= 2;
	}
	for (int i = 0; i<3; i++) {
		if (s.top() == 1) {
			printf("1");
			fir = false;
		}
		else if (s.top() == 0) {
			if (!fir) {
				printf("0");
			}
		}
		s.pop();
	}
	if (fir)
		cout << 0 << endl;
	while (1) {
		c = getchar();
		if (c == '\n')
			break;
		n = c - '0';
		for (int i = 0; i<3; i++) {
			s.push(n % 2);
			n /= 2;
		}
		for (int i = 0; i<3; i++) {
			if (s.top() == 1) {
				printf("1");
				fir = false;
			}
			else if (s.top() == 0) {
				printf("0");
			}
			s.pop();
		}
	}
}
