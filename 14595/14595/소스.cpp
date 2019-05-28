#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, m;
	vector<pair<int, int> > v;
	cin >> n >> m;
	int a, b;
	for (int i = 0; i<m; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	int cur = 0;
	int cnt = 0;
	for (int i = 0; i<m; i++) {
		if ((v[i].first>cur) && (v[i].second>cur)) {
			cnt += (v[i].first - cur);
			cur = v[i].second;
		}
		else if ((v[i].first <= cur) && (v[i].second>cur)) {
			cur = v[i].second;
		}
	}
	cnt += (n - cur);
	cout << cnt << endl;
}