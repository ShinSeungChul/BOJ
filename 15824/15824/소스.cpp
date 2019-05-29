#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#pragma warning(disable:4996)

using namespace std;

#define MOD 1000000007


int main() {
	long long total_sum = 0;
	long long temp[300001] = { 1 };
	vector<int> v;
	int n, num;
	for (int i = 1; i < 300001; i++) {
		temp[i] = (temp[i - 1] * 2) % MOD;
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		total_sum = (total_sum%MOD + (v[i] * (temp[i] % MOD - temp[n - i - 1] % MOD) % MOD) % MOD) % MOD;
		if (total_sum < 0)
			total_sum += MOD;
	}
	cout << total_sum << endl;
}