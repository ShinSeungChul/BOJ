#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, m;
	queue<int> v;
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		v.push(i + 1);
	}
	printf("<");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			v.push(v.front());
			v.pop();
		}
		if (i == n - 1)
			printf("%d", v.front());
		else
			printf("%d, ", v.front());
		v.pop();
	}
	printf(">\n");
}