#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<utility>
#pragma warning(disable:4996)

using namespace std;

#define MOD 1000000007

int main() {
	int n;
	cin >> n;
	vector<int> v;
	int ans = 0, num;
	int cur = 0, index = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	v.push_back(0);
	sort(v.begin(), v.end());
	for (int i = 1; i <= n; i++) {
		if (v[i] - cur < i - index) {
			ans += (v[i] - cur);
			cur = v[i];
			index = i;
		}
	}
	ans += (n - index);
	cout << ans << endl;
}