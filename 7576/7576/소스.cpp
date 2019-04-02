#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<utility>
#include<stack>

#pragma warning(disable:4996)

using namespace std;

int tomato[1002][1002] = { 0 };
bool visit[1002][1002] = { false };
int dx[4] = { -1, 1, 0 , 0 };
int dy[4] = { 0, 0, -1, 1 };
int n, m, cnt = -1;
queue<pair<int, int> > q;

void display();

void bfs() {
	int x, y;
	int size;
	while (!q.empty()) {
		cnt++;
		size = q.size();
		for (int k = 0; k < size; k++) {
			x = q.front().first;
			y = q.front().second;
			q.pop();
			for (int i = 0; i < 4; i++) {
				if (!visit[x + dx[i]][y + dy[i]]) {
					if (tomato[x + dx[i]][y + dy[i]] == 0) {
						q.push(make_pair(x + dx[i], y + dy[i]));
						visit[x + dx[i]][y + dy[i]] = true;
						tomato[x + dx[i]][y + dy[i]] = 1;
					}
				}
			}
		}
	}
}

void display() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << tomato[i][j];
		}
		cout << endl;
	}
}

int main() {
	int num;
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &num);
			tomato[i][j] = num;
			if (tomato[i][j] == 1) {
				q.push(make_pair(i, j));
				visit[i][j] = true;
			}
		}
	}
	for (int i = 0; i < n + 2; i++) {
		visit[i][0] = visit[i][m + 1] = true;
	}
	for (int i = 0; i < m + 2; i++) {
		visit[0][i] = visit[n + 1][i] = true;
	}
	bfs();
	bool fin = true;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < m; j++) {
			if (tomato[i][j] == 0) {
				fin = false;
			}
		}
		if (!fin)
			break;
	}
	if (fin)
		cout << cnt << endl;
	else
		cout << -1 << endl;
}