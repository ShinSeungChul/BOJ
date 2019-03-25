#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long n, sum, temp;
	bool a = false;
	cin >> n;
	for (int i = 1; i < n; i++) {
		sum = i;
		temp = i;
		while (temp) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == n) {
			a = true;
			cout << i << endl;
			break;
		}
	}
	if (!a)
		cout << 0 << endl;
	return 0;
}