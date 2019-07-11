#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int r, c, t;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	cin >> r >> c >> t;
	int arr[52][52] = { 0 };
	int dust = 0;
	int machine;
	int spread[52][52] = { 0 };
	int cur_r, cur_c;
	for (int i = 0; i < r + 2; i++) {
		arr[i][0] = arr[i][c + 1] = -1;
	}
	for (int i = 0; i < c + 2; i++) {
		arr[0][i] = arr[r + 1][i] = -1;
	}
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == -1)
				machine = i;
			else
				dust += arr[i][j];
		}
	}
	for (int k = 0; k < t; k++) {
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				for (int h = 0; h < 4; h++) {
					if (arr[i + dx[h]][j + dy[h]] != -1) {
						spread[i + dx[h]][j + dy[h]] += (arr[i][j] / 5);
						spread[i][j] -= (arr[i][j] / 5);
					}
				}
			}
		}
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				if (arr[i][j] != -1) {
					arr[i][j] += spread[i][j];
					spread[i][j] = 0;
				}
			}
		}

		cur_r = machine - 2;
		cur_c = 1;
		dust -= arr[cur_r][cur_c];
		arr[cur_r][cur_c] = 0;
		while (1) {
			cur_r--;
			if (arr[cur_r][cur_c] == -1) {
				cur_r++;
				break;
			}
			arr[cur_r + 1][cur_c] = arr[cur_r][cur_c];
		}
		while (1) {
			cur_c++;
			if (arr[cur_r][cur_c] == -1) {
				cur_c--;
				break;
			}
			arr[cur_r][cur_c - 1] = arr[cur_r][cur_c];
		}
		while (1) {
			cur_r++;
			if ((arr[cur_r][cur_c] == -1) || (machine == cur_r)) {
				cur_r--;
				break;
			}
			arr[cur_r - 1][cur_c] = arr[cur_r][cur_c];
		}
		while (1) {
			cur_c--;
			if (arr[cur_r][cur_c] == -1) {
				cur_c++;
				arr[cur_r][cur_c] = 0;
				break;
			}
			arr[cur_r][cur_c + 1] = arr[cur_r][cur_c];
		}

		cur_r = machine + 1;
		cur_c = 1;
		dust -= arr[cur_r][cur_c];
		arr[cur_r][cur_c] = 0;
		while (1) {
			cur_r++;
			if (arr[cur_r][cur_c] == -1) {
				cur_r--;
				break;
			}
			arr[cur_r - 1][cur_c] = arr[cur_r][cur_c];
		}
		while (1) {
			cur_c++;
			if (arr[cur_r][cur_c] == -1) {
				cur_c--;
				break;
			}
			arr[cur_r][cur_c - 1] = arr[cur_r][cur_c];
		}
		while (1) {
			cur_r--;
			if ((arr[cur_r][cur_c] == -1) || (machine - 1 == cur_r)) {
				cur_r++;
				break;
			}
			arr[cur_r + 1][cur_c] = arr[cur_r][cur_c];
		}
		while (1) {
			cur_c--;
			if (arr[cur_r][cur_c] == -1) {
				cur_c++;
				arr[cur_r][cur_c] = 0;
				break;
			}
			arr[cur_r][cur_c + 1] = arr[cur_r][cur_c];
		}

	}
	cout << dust << endl;
}