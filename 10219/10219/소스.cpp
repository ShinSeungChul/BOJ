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
	int t;
	int n, m;
	char grill[12][12];
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> grill[i][j];
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < m; j++) {
				printf("%c", grill[i][j]);
			}
			printf("\n");
		}
	}
}