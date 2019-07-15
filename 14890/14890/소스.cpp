#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, l;
	int arr[102][102] = { 0 };
	cin >> n >> l;
	int ans = 0;
	int cnt;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	bool temp = false;
	for (int i = 0; i < n; i++) {
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (arr[i][j] - arr[i][j - 1] == 0) {
				cnt++;
			}
			else if (arr[i][j] - arr[i][j - 1] == 1) {
				if (cnt >= l)
					cnt = 1;
				else
					break;
			}
			else if (arr[i][j] - arr[i][j - 1] == -1) {
				if (l == 1) {
					cnt = 0;
				}
				else if (j + l - 1 >= n) {
					break;
				}
				else {
					for (int k = 1; k < l; k++) {
						if (arr[i][j + k] != arr[i][j + k - 1]) {
							temp = true;
						}
						if (temp) {
							break;
						}
						if (k == l - 1) {
							j = j + k;
							cnt = 0;
						}
					}
					if (temp) {
						temp = false;
						break;
					}
				}
			}
			else {
				break;
			}
			if (j == n - 1)
				ans++;
		}
	}
	for (int i = 0; i < n; i++) {
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (arr[j][i] - arr[j - 1][i] == 0) {
				cnt++;
			}
			else if (arr[j][i] - arr[j - 1][i] == 1) {
				if (cnt >= l)
					cnt = 1;
				else
					break;
			}
			else if (arr[j][i] - arr[j - 1][i] == -1) {
				if (l == 1) {
					cnt = 0;
				}
				else if (j + l - 1 >= n) {
					break;
				}
				else {
					for (int k = 1; k < l; k++) {
						if (arr[j + k][i] != arr[j + k - 1][i]) {
							temp = true;
						}
						if (temp) {
							break;
						}
						if (k == l - 1) {
							j = j + k;
							cnt = 0;
						}
					}
					if (temp) {
						temp = false;
						break;
					}
				}
			}
			else {
				break;
			}
			if (j == n - 1)
				ans++;
		}
	}
	cout << ans << endl;
}