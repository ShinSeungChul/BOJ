#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int prime[10000] = { 0, 1 };
	int n, num, cnt, t;
	for (int i = 2; i < 10000; i++) {
		if (!prime[i]) {
			for (int j = 2; i*j < 10000; j++) {
				prime[i*j] = 1;
			}
		}
	}
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n / 2; i++) {
			if ((!prime[n / 2 - i]) && (!prime[n / 2 + i])) {
				printf("%d %d\n", n / 2 - i, n / 2 + i);
				break;
			}
		}
	}
}