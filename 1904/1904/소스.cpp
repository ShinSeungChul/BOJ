#include<iostream>
#include<cstdio>
#include<string>

#pragma warning(disable:4996)

using namespace std;

#define MOD 15746

int main() {
	int n;
	int arr[3] = { 1, 2, };
	cin >> n;
	for (int i = 2; i < n; i++) {
		arr[2] = (arr[0] % MOD + arr[1] % MOD) % MOD;
		arr[0] = arr[1];
		arr[1] = arr[2];
	}
	if (n == 1) {
		cout << 1 << endl;
	}
	else if (n == 2) {
		cout << 2 << endl;
	}
	else {
		cout << arr[2] << endl;
	}
}