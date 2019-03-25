#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

vector<long long> arr;

void solve(long long num, int n) {
	for (int i = n - 1; i >= 0; i--) {
		num = num * 10 + i;
		solve(num, i);
		num /= 10;
	}
	arr.push_back(num);
}


int main() {
	long long temp, n, k = 0, size;
	bool a;
	cin >> n;
	solve(0, 9);
	arr.pop_back();
	solve(9, 9);
	sort(arr.begin(), arr.end());
	size = arr.size();
	if (size <= n)
		cout << -1 << endl;
	else
		cout << arr[n] << endl;
	return 0;
}