#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n = 0, i;
	char* num = new char[101];
	cin >> num;
	while (1) {
		for (i = n; i < n + 10; i++) {
			if (*(num + i) == NULL) {
				break;
			}
			printf("%c", *(num + i));
		}
		if (*(num + i) == NULL) {
			break;
		}
		cout << endl;
		n += 10;
	}
	return 0;
}