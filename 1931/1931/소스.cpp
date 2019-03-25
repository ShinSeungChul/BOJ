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

bool compare(const pair<int, int> &n1, const pair<int, int> &n2) {
	if (n1.second == n2.second)
		return n1.first < n2.first;
	else
		return n1.second < n2.second;
}

int main() {
	int n;
	int a, b;
	int cnt = 1;
	int cur;
	vector<pair<int, int> > v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), compare);
	cur = v[0].second;
	for (int i = 1; i < n; i++) {
		if (v[i].first >= cur) {
			cur = v[i].second;
			cnt++;
		}
	}
	cout << cnt << endl;
}