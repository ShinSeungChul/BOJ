#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>

#pragma warning(disable:4996)

using namespace std;

int main() {
	vector<pair<int, int> > v;
	int t, n;
	int min;
	int cnt = 1;
	int n1, n2;
	cin >> t;
	while (t--) {
		cnt = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &n1, &n2);
			v.push_back(make_pair(n1, n2));
		}
		sort(v.begin(), v.end());
		min = v[0].second;
		for (int i = 1; i < n; i++) {
			if (v[i].second > min)
				continue;
			cnt++;
			min = v[i].second;
		}
		cout << cnt << endl;
		v.clear();
	}
}