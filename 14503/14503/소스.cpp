#include<iostream>
#include<cstdio>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int main() {
	bool fin = false;
	int n, m;
	int cur_x, cur_y, dir;
	int room[52][52] = { 0 };
	int cnt = 0;
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	cin >> n >> m;
	cin >> cur_x >> cur_y >> dir;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &room[i][j]);
		}
	}
	while (!fin) {
		if (!room[cur_x][cur_y]) {
			cnt++;
			room[cur_x][cur_y] = 2;
		}
		for (int i = 0; i < 4; i++) {
			dir--;
			if (dir < 0)
				dir += 4;
			if (!room[cur_x + dx[dir]][cur_y + dy[dir]]) {
				cur_x += dx[dir];
				cur_y += dy[dir];
				break;
			}
			if (i == 3) {
				cur_x -= dx[dir];
				cur_y -= dy[dir];
				if (room[cur_x][cur_y] == 1) {
					fin = true;
					break;
				}
				i = -1;
			}
		}
	}
	cout << cnt << endl;
}