#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int prime[250000] = { 0, 1 };
	int n, num, cnt;
	for (int i = 2; i < 250000; i++) {
		if (!prime[i]) {
			for (int j = 2; i*j < 250000; j++) {
				prime[i*j] = 1;
			}
		}
	}
	while (1) {
		scanf("%d", &n);
		if (!n)
			break;
		cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (!prime[i])
				cnt++;
		}
		printf("%d\n", cnt);
	}
}