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
	int miro[27][27] = { 0 };
	int n;
	int x, y, num, dong = 0;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	queue<pair<int, int> > q;
	vector<int> v;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		getchar();
		for (int j = 1; j < n + 1; j++) {
			miro[i][j] = getchar() - 48;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (miro[i][j]) {
				dong++;
				num = 0;
				q.push(make_pair(i, j));
				while (!q.empty()) {
					x = q.front().first;
					y = q.front().second;
					q.pop();
					if (miro[x][y]) {
						num++;
						miro[x][y] = 0;
					}
					for (int k = 0; k < 4; k++) {
						if (miro[x + dx[k]][y + dy[k]]) {
							q.push(make_pair(x + dx[k], y + dy[k]));
						}
					}
				}
				v.push_back(num);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << dong << endl;
	for (int i = 0; i < dong; i++) {
		printf("%d\n", v[i]);
	}
}