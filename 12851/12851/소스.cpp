#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<utility>

#pragma warning(disable:4996)

using namespace std;

int main() {
	bool visit[100001] = { false };
	bool fin = false;
	int n, k, depth, cur, cnt = 1;
	queue<pair<int, int> > q;
	cin >> n >> k;
	q.push(make_pair(n, 0));
	while (1) {
		cur = q.front().first;
		if (!fin)
			depth = q.front().second;
		else {
			if (depth != q.front().second)
				break;
			if (cur == k)
				cnt++;
		}
		visit[cur] = true;
		if (cur == k) {
			fin = true;
		}
		q.pop();
		if (cur - 1 >= 0) {
			if (!visit[cur - 1])
				q.push(make_pair(cur - 1, depth + 1));
		}
		if (cur + 1 <= 100000) {
			if (!visit[cur + 1])
				q.push(make_pair(cur + 1, depth + 1));
		}
		if (cur * 2 <= 100000) {
			if (!visit[cur * 2])
				q.push(make_pair(cur * 2, depth + 1));
		}
	}
	cout << depth << endl << cnt << endl;
}