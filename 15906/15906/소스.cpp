#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<string>

#pragma warning(disable:4996)

using namespace std;

priority_queue<pair<pair<int, int>, pair<int, int> > > pq;

void push(int a, int b, int c, int d) {
	pq.push(make_pair(make_pair(a, b), make_pair(c, d)));
}

int main() {
	int n, t, r, c;
	int dp[2][501][501] = { 0 };
	char arr[501][501];
	int cnt, mode, x, y;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	cin >> n >> t >> r >> c;
	for (int i = 0; i < n; i++) {
		getchar();
		for (int j = 0; j < n; j++) {
			scanf("%c", &arr[i][j]);
		}
	}
	dp[0][0][0] = -1;
	push(-1, 0, 0, 0);
	while (1) {
		cnt = pq.top().first.first;
		mode = pq.top().first.second;
		x = pq.top().second.first;
		y = pq.top().second.second;
		pq.pop();
		if (!mode) {
			for (int i = 0; i < 4; i++) {
				if ((0 <= (x + dx[i])) && ((x + dx[i]) < n) && (0 <= (y + dy[i])) && ((y + dy[i]) < n)) {
					if (!dp[0][x + dx[i]][y + dy[i]]) {
						dp[0][x + dx[i]][y + dy[i]] = cnt - 1;
						push(cnt - 1, 0, x + dx[i], y + dy[i]);
					}
				}
			}
			if (!dp[1][x][y])
				push(cnt - t, 1, x, y);
		}
		else {
			if (!dp[1][x][y]) {
				dp[1][x][y] = cnt;
				for (int i = 1; i < n; i++) {
					if ((x - i) < 0)
						break;
					if (arr[x - i][y] == '#') {
						if (!dp[1][x - i][y])
							push(cnt - 1, 1, x - i, y);
						break;
					}
				}
				for (int i = 1; i < n; i++) {
					if ((x + i) > n)
						break;
					if (arr[x + i][y] == '#') {
						if (!dp[1][x + i][y])
							push(cnt - 1, 1, x + i, y);
						break;
					}
				}
				for (int i = 1; i < n; i++) {
					if ((y - i) < 0)
						break;
					if (arr[x][y - i] == '#') {
						if (!dp[1][x][y - i])
							push(cnt - 1, 1, x, y - i);
						break;
					}
				}
				for (int i = 1; i < n; i++) {
					if ((y + i) > n)
						break;
					if (arr[x][y + i] == '#') {
						if (!dp[1][x][y + 1])
							push(cnt - 1, 1, x, y + i);
						break;
					}
				}
			}
			if (!dp[0][x][y]) {
				dp[0][x][y] = cnt;
				push(cnt, 0, x, y);
			}
		}
		if (dp[0][r - 1][c - 1]) {
			cout << abs(dp[0][r - 1][c - 1]) - 1 << endl;
			break;
		}
	}
}