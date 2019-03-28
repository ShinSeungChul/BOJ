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
	int w, h;
	int num = 0;
	int dx[8] = { -1, 1, 0, 0, -1, -1, 1, 1 };
	int dy[8] = { 0, 0, -1, 1, 1, -1, 1, -1 };
	int map[52][52] = { 0 };
	queue<pair<int, int> > q;
	while (1) {
		num = 0;
		scanf("%d %d", &w, &h);
		if (!w) {
			if (!h)
				break;
		}
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				scanf("%d", &map[i][j]);
			}
		}
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				if (map[i][j]) {
					q.push(make_pair(i, j));
					map[i][j] = 0;

					num++;
				}
				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					for (int k = 0; k < 8; k++) {
						if (map[x + dx[k]][y + dy[k]]) {
							map[x + dx[k]][y + dy[k]] = 0;
							q.push(make_pair(x + dx[k], y + dy[k]));
						}
					}
				}
			}
		}
		cout << num << endl;
	}
}