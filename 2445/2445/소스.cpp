#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>
#include<stack>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int j = 0; j < (n - i) * 2 - 2; j++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < n - i; j++) {
			printf("*");
		}
		for (int j = 0; j < 2 * i + 2; j++) {
			printf(" ");
		}
		for (int j = 1; j < n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}