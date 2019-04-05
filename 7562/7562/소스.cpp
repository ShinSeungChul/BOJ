#include<iostream>
#include<queue>
#include<cstdio>

#pragma warning(disable : 4996)

using namespace std;

int main() {
	int l, t;
	int des_x, des_y;
	queue<pair<int, int> > q;
	int cnt;
	bool fin = false;
	int cur_x, cur_y;
	bool visit[301][301] = { false };
	int dx[8] = { 2, 2, 1, 1, -1, -1, -2, -2 };
	int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };
	cin >> t;
	while (t--) {
		fin = false;
		cnt = -1;
		scanf("%d", &l);
		scanf("%d %d", &cur_x, &cur_y);
		scanf("%d %d", &des_x, &des_y);
		q.push(make_pair(cur_x, cur_y));
		while (!q.empty()) {
			cnt++;
			int size = q.size();
			for (int i = 0; i < size; i++) {
				cur_x = q.front().first;
				cur_y = q.front().second;
				q.pop();
				if ((cur_x == des_x) && (cur_y == des_y)) {
					fin = true;
					break;
				}
				for (int i = 0; i < 8; i++) {
					if ((cur_x + dx[i]) >= 0) {
						if ((cur_x + dx[i]) < l) {
							if ((cur_y + dy[i]) >= 0) {
								if ((cur_y + dy[i]) < l) {
									if (!visit[cur_x + dx[i]][cur_y + dy[i]]) {
										q.push(make_pair(cur_x + dx[i], cur_y + dy[i]));
										visit[cur_x + dx[i]][cur_y + dy[i]] = true;
									}
								}
							}
						}
					}
				}
			}
			if (fin)
				break;
		}
		printf("%d\n", cnt);
		int size = q.size();
		for (int i = 0; i < size; i++)
			q.pop();
		for (int i = 0; i < 301; i++) {
			for (int j = 0; j < 301; j++) {
				visit[i][j] = false;
			}
		}
	}
}