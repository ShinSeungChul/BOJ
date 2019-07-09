#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;
	vector<long long> v1;
	vector<long long> v2;
	long long before, cur;
	cin >> before;
	long long a = 0, b = 0;
	for (int i = 1; i < n; i++) {
		scanf("%lld", &cur);
		if (before == cur) {
			v1.push_back(0);
			v2.push_back(0);
		}
		else if (before > cur) {
			v1.push_back(m - before + cur);
			a += (m - before + cur);
			v2.push_back(before - cur);
		}
		else if (before < cur) {
			v1.push_back(cur - before);
			a += (cur - before);
			v2.push_back(m - cur + before);
		}
		before = cur;
	}
	long long ans = a;
	long long button = 0;
	for (int i = 0; i < n - 1; i++) {
		a -= v1[i];
		b += v2[i];
		if (ans > max(a, b)) {
			ans = max(a, b);
			button = i + 1;
		}
	}
	cout << button + 1 << endl << ans << endl;
}