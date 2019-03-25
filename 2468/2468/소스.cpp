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
	int n;
	int land[102][102] = { 0 };
	int temp[102][102] = { 0 };
	int h[101] = { 0 };
	cin >> n;
	int max = 1, safe;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	queue<pair<int, int> > q;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &land[i][j]);
			h[land[i][j]] = 1;
		}
	}
	for (int i = 0; i < 101; i++) {
		if (h[i]) {
			safe = 0;
			for (int j = 1; j <= n; j++) {
				for (int k = 1; k <= n; k++) {
					if (land[j][k] <= i)
						temp[j][k] = 0;
					else
						temp[j][k] = land[j][k];
				}
			}
			for (int j = 1; j <= n; j++) {
				for (int k = 1; k <= n; k++) {
					if (temp[j][k]) {
						q.push(make_pair(j, k));
						safe++;
					}
					while (!q.empty()) {
						int x, y;
						x = q.front().first;
						y = q.front().second;
						q.pop();
						for (int l = 0; l < 4; l++) {
							if (temp[x + dx[l]][y + dy[l]]) {
								temp[x + dx[l]][y + dy[l]] = 0;
								q.push(make_pair(x + dx[l], y + dy[l]));
							}
						}
					}
				}
			}
			if (max < safe)
				max = safe;
		}
	}
	cout << max << endl;
}