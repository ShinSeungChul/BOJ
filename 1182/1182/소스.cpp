#include<iostream>
#include<cstdio>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int num, n, s, sum, cnt = 0;
vector<int> v;

void solve(int idx, int sum) {
	if (idx == n) {
		if (sum == s) {
			cnt++;
		}
		return;
	}
	solve(idx + 1, sum + v[idx]);
	solve(idx + 1, sum);
}

int main() {
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	solve(0, 0);
	if (s == 0)
		cnt--;
	cout << cnt << endl;
}