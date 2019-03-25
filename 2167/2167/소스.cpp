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
	int n, m;
	int i, j, x, y;
	int t;
	int sum = 0;
	int arr[301][301] = { 0 };

	cin >> n >> m;
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			scanf("%d", &arr[a + 1][b + 1]);
		}
	}
	cin >> t;
	while (t--) {
		sum = 0;
		scanf("%d%d%d%d", &i, &j, &x, &y);
		for (int a = i; a <= x; a++) {
			for (int b = j; b <= y; b++) {
				sum += arr[a][b];
			}
		}
		printf("%d\n", sum);
	}
}