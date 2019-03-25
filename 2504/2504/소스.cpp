#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	char str[31];
	int len = 1;
	vector<char> s;
	int temp, sum = 0;
	cin >> str;
	s.push_back(str[0]);
	if (str[0] == '(')
		temp = 2;
	else if (str[0] == '[')
		temp = 3;
	else {
		cout << 0 << endl;
		exit(0);
	}
	for (int i = 1; str[i] != '\0'; i++) {
		if (str[i] == '(') {
			len++;
			temp *= 2;
			s.push_back('(');
		}
		else if (str[i] == '[') {
			len++;
			temp *= 3;
			s.push_back('[');
		}
		else if (str[i] == ')') {
			if ((!len) || (s[len - 1] != '(')) {
				cout << 0 << endl;
				exit(0);
			}
			len--;
			s.pop_back();
			if (str[i - 1] == '(')
				sum += temp;
			temp /= 2;
		}
		else {
			if ((!len) || (s[len - 1] != '[')) {
				cout << 0 << endl;
				exit(0);
			}
			len--;
			s.pop_back();
			if (str[i - 1] == '[')
				sum += temp;
			temp /= 3;
		}
	}
	if (len)
		cout << 0 << endl;
	else
		cout << sum << endl;
}