#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int cnt[10001] = { 0 };
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		cnt[num]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j<cnt[i]; j++)
			printf("%d\n", i);
	}
}