#include<iostream>
#include<string.h>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	char arr[101];
	int eng[26];
	for (int i = 0; i < 26; i++) {
		eng[i] = -1;
	}
	cin >> arr;
	for (int i = 0; i < strlen(arr); i++) {
		if (eng[arr[i] - 97] == -1)
			eng[arr[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << eng[i] << " ";
	}
	cout << endl;
	return 0;
}