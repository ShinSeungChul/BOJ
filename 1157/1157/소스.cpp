#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

using namespace std;

int main() {
	char str[1000001];
	bool two = false;
	int max = 0, maxIndex = 0;
	int cnt[26] = { 0 };
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] > 90)
			cnt[str[i] - 97]++;
		else
			cnt[str[i] - 65]++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			maxIndex = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == cnt[i]) {
			if (two) {
				cout << '?' << endl;
				break;
			}
			two = true;
		}
		if (i == 25)
			printf("%c", maxIndex + 65);
	}
}