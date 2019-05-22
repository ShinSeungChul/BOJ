#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#include<set>
#include<map>

#pragma warning(disable:4996)

using namespace std;

map<int, int> mp;
vector<int> v;
int a, b;

int make_seg(int left, int right, int index) {
	if (left == right) {
		return mp[index] = v[left];
	}
	return mp[index] = min(make_seg(left, (left + right) / 2, index * 2),
		make_seg((left + right) / 2 + 1, right, index * 2 + 1));
}

int solve(int left, int right, int index) {
	if ((left > b) || (right < a))
		return 2000000000;
	if ((left >= a) && (right <= b)) {
		return mp[index];
	}
	return min(solve(left, (left + right) / 2, index * 2),
		solve((left + right) / 2 + 1, right, index * 2 + 1));
}

int main() {
	int n, m;
	cin >> n >> m;
	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	make_seg(0, n - 1, 1);
	while (m--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", solve(1, n, 1));
	}
}