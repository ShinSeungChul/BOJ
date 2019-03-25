#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

vector<pair<int, int> > v[100000];
int max1 = 0;
int arr[100000] = { 0 };
pair<int, int> temp, maxTemp;

void find(int cur, int sum) {
	int size = v[cur].size();
	for (int i = 0; i < size; i++) {
		if (!arr[v[cur][i].first]) {
			temp = v[cur][i];
			arr[v[cur][i].first] = 1;
			find(v[cur][i].first, sum + v[cur][i].second);
			arr[v[cur][i].first] = 0;
		}
	}
	if (max1 < sum) {
		max1 = sum;
		maxTemp = temp;
	}
}

int main() {
	int n, a, b, c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		while (1) {
			scanf("%d", &b);
			if (b == -1)
				break;
			scanf("%d", &c);
			v[a].push_back({ b, c });
		}
	}
	arr[1] = 1;
	find(1, 0);
	for (int i = 0; i <= n; i++) {
		arr[i] = 0;
	}
	arr[maxTemp.first] = 1;
	find(maxTemp.first, 0);
	cout << max1 << endl;
}