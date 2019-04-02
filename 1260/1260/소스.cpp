#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<utility>
#include<stack>

#pragma warning(disable:4996)

using namespace std;

int n, m, v;
int n1, n2, cur;
queue<int> q;
stack<int> s;
bool s_visit[1001] = { false };
bool q_visit[1001] = { false };
int arr[1001][1001] = { 0 };

void dfs(int a) {
	if (s_visit[a])
		return;
	s_visit[a] = true;
	printf("%d ", a);
	for (int i = 0; i <= n; i++) {
		if (arr[a][i]) {
			if (!s_visit[i])
				dfs(i);
		}
	}
}

int main() {
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &n1, &n2);
		arr[n1][n2] = arr[n2][n1] = 1;
	}
	dfs(v);
	cout << endl;
	q.push(v);
	q_visit[v] = true;
	while (!q.empty()) {
		cur = q.front();
		printf("%d ", cur);
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (arr[cur][i]) {
				if (!q_visit[i]) {
					q.push(i);
					q_visit[i] = true;
				}
			}
		}
	}
	cout << endl;
}