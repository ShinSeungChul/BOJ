#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int	n, m;
	bool solve[11] = { false };
	int arr[101][11] = { 0 };
	int cnt;
	bool good = true;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= m; j++) {
			scanf("%d", &arr[i][j]);
			if (j == 0) {
				if ((arr[i][j] == 0) || (arr[i][j] == m))
					good = false;
			}
			if (arr[i][j] == 1)
				solve[j] = true;
		}
	}
	for (int i = 0; i < n; i++) {
		cnt = arr[i][0];
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == 1)
				cnt--;
			if (arr[i][j] == -1) {
				if (cnt) {
					if (!solve[j]) {
						solve[j] = true;
						cnt--;
					}
				}
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		if ((!solve[i]) || (!good)) {
			cout << "NO" << endl;
			break;
		}
		if (i == m) {
			cout << "YES" << endl;
		}
	}
}