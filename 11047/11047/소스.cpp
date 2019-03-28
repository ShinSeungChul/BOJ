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
	int n, k;
	int temp;
	int cnt = 0;
	int coin[11] = { 0 };
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	temp = n - 1;
	while (k) {
		if (coin[temp] <= k) {
			k -= coin[temp];
			cnt++;
		}
		else
			temp--;
	}
	cout << cnt << endl;
}