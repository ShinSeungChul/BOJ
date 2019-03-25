#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

using namespace std;

int main() {
	char str[101];
	bool group[26] = { false };
	int t, cnt = 0;
	cin >> t;
	while (t--) {
		cin >> str;
		group[str[0] - 97] = true;
		if (str[1] == '\0')
			cnt++;
		for (int i = 1; str[i] != '\0'; i++) {
			if (str[i - 1] != str[i]) {
				if (group[str[i] - 97])
					break;
				else {
					group[str[i] - 97] = true;
				}
			}
			if (str[i + 1] == '\0')
				cnt++;
		}
		for (int i = 0; i < 26; i++)
			group[i] = false;
	}
	cout << cnt << endl;
}