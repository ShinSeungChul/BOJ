#include<iostream>
#include<queue>
#include<cstdio>

#pragma warning(disable : 4996)

using namespace std;

int main() {
	int t, cnt, x, y;
	cin >> t;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	queue<pair<int, int> > q;
	queue<pair<int, int> > q2;
	bool arr[52][52] = { false };
	bool visit[52][52] = { false };
	int n, m, k, n1, n2;
	while (t--) {
		cnt = 0;
		scanf("%d %d %d", &m, &n, &k);
		for (int i = 0; i<k; i++) {
			scanf("%d %d", &n2, &n1);
			arr[n1 + 1][n2 + 1] = true;
			q.push(make_pair(n1 + 1, n2 + 1));
		}
		while (!q.empty()) {
			x = q.front().first;
			y = q.front().second;
			q.pop();
			if (!visit[x][y]) {
				cnt++;
				visit[x][y] = true;
				q2.push(make_pair(x, y));
			}
			while (!q2.empty()) {
				x = q2.front().first;
				y = q2.front().second;
				q2.pop();
				for (int i = 0; i<4; i++) {
					if (arr[x + dx[i]][y + dy[i]]) {
						if (!visit[x + dx[i]][y + dy[i]]) {
							q2.push(make_pair(x + dx[i], y + dy[i]));
							visit[x + dx[i]][y + dy[i]] = true;
						}
					}
				}
			}
		}
		for (int i = 0; i<52; i++) {
			for (int j = 0; j<52; j++) {
				arr[i][j] = visit[i][j] = false;
			}

		}
		printf("%d\n", cnt);
	}

}