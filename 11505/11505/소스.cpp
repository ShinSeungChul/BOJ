#include<iostream>
#include<cstdio>
#include<map>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

#define MOD 1000000007

map<long long, long long> mp;
vector<long long> v;
int a, b;
long long temp;

long long make_seg(int left, int right, int index) {
	if (left == right)
		return mp[index] = v[left];
	return mp[index] = ((make_seg(left, (left + right) / 2, index * 2) % MOD)*
		(make_seg((left + right) / 2 + 1, right, index * 2 + 1) % MOD)) % MOD;
}

long long solve(int left, int right, int index) {
	if ((a>right) || (b<left))
		return 1;
	if ((left >= a) && (right <= b))
		return mp[index];
	return ((solve(left, (left + right) / 2, index * 2) % MOD)*
		(solve((left + right) / 2 + 1, right, index * 2 + 1) % MOD)) % MOD;
}

void change(int left, int right, int index) {
	if ((left>a) || (right<a))
		return;
	if ((left == a) && (right == a)) {
		temp = mp[index];
		mp[index] = b;
		return;
	}
	if ((left <= a) && (right >= a)) {
		change(left, (left + right) / 2, index * 2);
		change((left + right) / 2 + 1, right, index * 2 + 1);
		mp[index] = ((mp[index * 2] % MOD)*(mp[index * 2 + 1] % MOD)) % MOD;
	}
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int num;
	for (int i = 0; i<n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	make_seg(0, n - 1, 1);
	for (int i = 0; i<m + k; i++) {
		scanf("%d", &num);
		if (num == 1) {
			scanf("%d %d", &a, &b);
			change(1, n, 1);
		}
		else if (num == 2) {
			scanf("%d %d", &a, &b);
			printf("%lld\n", solve(1, n, 1));
		}
	}
}