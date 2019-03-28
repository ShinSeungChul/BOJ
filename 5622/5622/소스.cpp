#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

using namespace std;

int main() {
	char str[16];
	int cnt[10] = { 0 };
	int sum = 0;
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 90)
			cnt[9]++;
		else if (str[i] < 83)
			cnt[(str[i] - 59) / 3]++;
		else
			cnt[(str[i] - 60) / 3]++;
	}
	for (int i = 0; i < 10; i++) {
		sum += cnt[i] * i;
		sum += cnt[i];
	}
	cout << sum << endl;
}