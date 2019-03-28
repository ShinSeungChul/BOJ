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
	vector<pair<int, int> > v;
	int a, b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}
}