#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

using namespace std;

int main() {
	char str[101];
	int cnt = 1;
	cin >> str;

	for (int i = 1; str[i] != '\0'; i++) {
		cnt++;
		if (str[i] == 'j') {
			if ((str[i - 1] == 'l') || (str[i - 1] == 'n'))
				cnt--;
		}
		else if (str[i] == '=') {
			cnt--;
			if ((str[i - 1] == 'z') && (str[i - 2] == 'd'))
				cnt--;
		}
		else if (str[i] == '-') {
			cnt--;
		}
	}
	cout << cnt << endl;
}