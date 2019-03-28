#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

vector<int> v[1000002];
int parent[1000002] = { -1, -1 };

void solve(int cur) {
	int size = v[cur].size();
	for (int i = 0; i < size; i++) {
		if (!parent[v[cur][i]]) {
			parent[v[cur][i]] = cur;
			solve(v[cur][i]);
		}
	}
}

int main() {
	int n, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++) {
		scanf("%d%d", &x, &y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	solve(1);
	for (int i = 2; i <= n; i++) {
		printf("%d\n", parent[i]);
	}
	return 0;
}