#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<set>
#include<utility>
#include<algorithm>
#include<map>

#pragma warning(disable:4996)

using namespace std;

int n, m, num, min_cnt, temp = 1, a = 1;
bool button[10] = { false };
bool first = false;

void solve(int a, int sum, int cnt) {
	if ((min_cnt > abs(sum - n) + cnt) && (first)) {
		min_cnt = abs(sum - n) + cnt;
	}
	first = true;
	if (!a) {
		return;
	}
	for (int i = 0; i < 10; i++) {
		if (!button[i]) {
			solve(a - 1, sum * 10 + i, cnt + 1);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &num);
		button[num] = true;
	}
	min_cnt = abs(n - 100);
	while ((n / 10) / temp) {
		temp *= 10;
		a++;
	}
	solve(a + 1, 0, 0);
	cout << min_cnt << endl;
}