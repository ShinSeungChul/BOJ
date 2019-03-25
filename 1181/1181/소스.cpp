#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

bool compare(const char *a, const char *b) {
	int len = max(strlen(a), strlen(b));

	if (strlen(a) != strlen(b))
		return strlen(a) < strlen(b);
	else {
		for (int i = 0; i < len; i++) {
			if (a[i] != b[i])
				return a[i] < b[i];
		}
		return a[0] < b[0];
	}
}

int main() {
	int t, maxLen = 0;
	char **str;
	scanf("%d", &t);
	str = new char*[t];
	for (int i = 0; i < t; i++) {
		str[i] = new char[51];
		cin >> str[i];
	}
	sort(str, str + t, compare);

	cout << str[0] << endl;
	for (int i = 1; i < t; i++) {
		if (strcmp(str[i - 1], str[i]))
			cout << str[i] << endl;
	}

	return 0;
}