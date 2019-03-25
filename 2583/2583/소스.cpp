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
	int num = 0;
	int sjfqdl;
	int n, m, k;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	int x1, y1, x2, y2;
	int x, y;
	int arr[102][102] = { 0 };
	queue<pair<int, int> > q;
	vector<int> v;
	cin >> n >> m >> k;
	for (int i = 0; i < n + 2; i++) {
		arr[i][0] = 1;
	}
	for (int i = 0; i < n + 2; i++) {
		arr[i][m + 1] = 1;
	}
	for (int i = 0; i < m + 2; i++) {
		arr[0][i] = 1;
	}
	for (int i = 0; i < m + 2; i++) {
		arr[n + 1][i] = 1;
	}
	while (k--) {
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for (int i = x1 + 1; i <= x2; i++) {
			for (int j = y1 + 1; j <= y2; j++) {
				arr[j][i] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!arr[i][j]) {
				q.push(make_pair(i, j));
				arr[i][j] = 1;
				sjfqdl = 1;
				while (!q.empty()) {
					x = q.front().first;
					y = q.front().second;
					q.pop();
					for (int k = 0; k < 4; k++) {
						if (!arr[x + dx[k]][y + dy[k]]) {
							arr[x + dx[k]][y + dy[k]] = 1;
							sjfqdl++;
							q.push(make_pair(x + dx[k], y + dy[k]));
						}
					}
				}
				num++;
				v.push_back(sjfqdl);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << num << endl;
	for (int i = 0; i < num; i++) {
		printf("%d", v[i]);
		if (i != num - 1)
			printf(" ");
	}
	cout << endl;
}