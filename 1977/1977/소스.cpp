#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>
#include<stack>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long m, n;
	long long temp, k = 1;
	long long sum = 0;
	bool first = false;
	cin >> m >> n;
	while (1) {
		if (k*k > n)
			break;
		if (m <= k*k) {
			if (n >= k*k) {
				sum += k*k;
				if (!first) {
					first = true;
					temp = k*k;
				}
			}
		}
		k++;
	}
	if (!sum) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl << temp << endl;
	}

}