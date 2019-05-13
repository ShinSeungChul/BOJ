#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<set>
#include<utility>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n;
	int a, b;
	vector<pair<int, int> > v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	vector<pair<int, int> >::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		printf("%d %d\n", (*iter).first, (*iter).second);
	}
}