#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#include<set>

#pragma warning(disable:4996)

using namespace std;

int main() {
	set<int> s;
	vector<int> v;
	int n, m, n1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &n1);
		s.insert(n1);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &n1);
		v.push_back(n1);
	}
	for (int i = 0; i < m; i++) {
		if (s.find(v[i]) != s.end())
			printf("1\n");
		else
			printf("0\n");
	}
}