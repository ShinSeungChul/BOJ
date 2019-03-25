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

int map[22][22] = { 0 };
int a[29] = { 0 };
int R, C;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int max1 = 0;
stack<pair<int, int> > s;
char c;

void solve(int len) {
	len++;
	int x = s.top().first;
	int y = s.top().second;
	s.pop();
	for (int i = 0; i < 4; i++) {
		if (!a[map[x + dx[i]][y + dy[i]]]) {
			a[map[x + dx[i]][y + dy[i]]] = 1;
			s.push(make_pair(x + dx[i], y + dy[i]));
			solve(len);
			a[map[x + dx[i]][y + dy[i]]] = 0;
		}
	}
	if (max1 < len)
		max1 = len;
}

int main() {
	cin >> R >> C;
	getchar();
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			c = getchar();
			map[i][j] = c - 'A' + 1;
		}
		getchar();
	}
	a[0] = 1;
	a[map[1][1]] = 1;
	s.push(make_pair(1, 1));
	solve(0);
	cout << max1 << endl;
}