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

int vir[101] = { 0 };
int vir_com = 0;
int com[101][101] = { 0 };
int n;

void dfs(int k) {
	for (int i = 1; i < n + 1; i++) {
		if (com[k][i]) {
			if (!vir[i]) {
				vir_com++;
				vir[i] = 1;
				dfs(i);
			}
		}
	}
}

int main() {
	int node;
	int a, b;
	cin >> n >> node;
	for (int i = 0; i < node; i++) {
		scanf("%d %d", &a, &b);
		com[a][b] = 1;
		com[b][a] = 1;
	}
	vir[1] = 1;
	dfs(1);
	cout << vir_com << endl;
}