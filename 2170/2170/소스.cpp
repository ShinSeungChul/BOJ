#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdio>

using namespace std;

#pragma warning(disable:4996)

int main() {
	int n;
	vector<pair<int, int> > v;
	cin >> n;
	int a, b;
	int min, max;
	int line = 0;
	for (int i = 0; i<n; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	min = v[0].first;
	max = v[0].second;
	line = max - min;
	for (int i = 1; i<n; i++) {
		if (v[i].first>max) {
			min = v[i].first;
			max = v[i].second;
			line += (max - min);
		}
		else if (v[i].second>max) {
			line += (v[i].second - max);
			max = v[i].second;
		}
	}
	cout << line << endl;
}