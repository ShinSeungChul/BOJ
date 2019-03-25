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

int miro[102][102] = { 0 };
int check[102][102] = { 0 };
int n, m;
int a;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
queue<pair<int, int> > q;

void bfs() {
	int x, y;
	x = q.front().first;
	y = q.front().second;
	q.pop();
	for (int i = 0; i < 4; i++) {
		if ((miro[x + dx[i]][y + dy[i]]) && (check[x + dx[i]][y + dy[i]] == 0)) {
			check[x + dx[i]][y + dy[i]] = check[x][y] + 1;
			q.push(make_pair(x + dx[i], y + dy[i]));
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 1; i < n + 1; i++) {
		getchar();
		for (int j = 1; j < m + 1; j++) {
			miro[i][j] = getchar() - 48;
		}
	}
	q.push(make_pair(1, 1));
	check[1][1] = 1;
	while (!q.empty()) {
		bfs();
	}
	cout << check[n][m] << endl;
}