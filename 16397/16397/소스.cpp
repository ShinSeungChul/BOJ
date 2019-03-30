#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<utility>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, t, g;
	int cur, depth, temp;
	bool visit[100001] = { false };
	queue<pair<int, int> > q;
	cin >> n >> g >> t;
	q.push(make_pair(n, 0));
	visit[n] = true;
	while (1) {
		if (q.empty()) {
			depth = -1;
			break;
		}
		cur = q.front().first;
		depth = q.front().second;
		q.pop();
		if (depth > g) {
			depth = -1;
			break;
		}
		if (cur == t)
			break;
		if (cur + 1 < 100000) {
			if (!visit[cur + 1]) {
				q.push(make_pair(cur + 1, depth + 1));
				visit[cur + 1] = true;
			}
		}
		temp = 1;
		while ((cur * 2) / (temp * 10)) {
			temp *= 10;
		}
		if ((cur * 2 < 100000) && (cur * 2 - temp > 0)) {
			if (!visit[cur * 2 - temp]) {
				q.push(make_pair(cur * 2 - temp, depth + 1));
				visit[cur * 2 - temp] = true;
			}
		}
	}
	if (depth == -1) {
		cout << "ANG" << endl;
	}
	else
	{
		printf("%d\n", depth);
	}
}