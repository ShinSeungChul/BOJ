#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<utility>
#pragma warning(disable:4996)

using namespace std;

int n;
vector<pair<int, int> > v;
int a, b;
int solve;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	solve = v[n - 5].first;
	for (int i = 6; i <= n; i++) {
		if (v[n - i].first != solve)
			break;
		if (v[n - i].first == solve)
			cnt++;
	}
	cout << cnt << endl;
}