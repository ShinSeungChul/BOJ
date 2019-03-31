#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<utility>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, m;
	char c;
	int arr[1002][1002] = { 0 };
	int visit[1002][1002] = { 0 };
	int dx[4] = { -1, 1, 0, 0 };
	bool can = false;
	int dy[4] = { 0, 0, -1, 1 };
	vector<pair<int, int> > v;
	cin >> n >> m;
	for (int i = 0; i < 1002; i++) {
		arr[i][m + 1] = arr[0][i] = arr[i][0] = 1;
	}
	for (int i = 1; i <= n; i++) {
		getchar();
		for (int j = 1; j <= m; j++) {
			c = getchar();
			arr[i][j] = c - '0';
		}
	}
	for (int i = 1; i <= m; i++) {
		if (!arr[1][i]) {
			v.push_back(make_pair(1, i));
			visit[1][i] = 1;
		}
		while (!v.empty()) {
			int x, y;
			x = v.front().first;
			y = v.front().second;
			v.erase(v.begin());
			if (x == n - 1) {
				can = true;
				break;
			}
			for (int i = 0; i < 4; i++) {
				if (((visit[x + dx[i]][y + dy[i]]) == 0) && ((arr[x + dx[i]][y + dy[i]]) == 0)) {
					v.push_back(make_pair(x + dx[i], y + dy[i]));
					visit[x + dx[i]][y + dy[i]] = 1;
				}
			}
		}
		if (can)
			break;
	}
	if (can)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}