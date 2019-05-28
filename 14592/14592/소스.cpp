#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>

#pragma warning(disable:4996)

using namespace std;

int main() {
	vector<pair<pair<int, int>, pair<int, int> > > v;
	int n;
	int a, b, c;
	cin >> n;
	for (int i = 0; i<n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		v.push_back(make_pair(make_pair(a, 1000000000 - b), make_pair(1000000000 - c, i + 1)));
	}
	sort(v.begin(), v.end());
	printf("%d", v[n - 1].second.second);
}