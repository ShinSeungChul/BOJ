#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int x, y;
int arr[200][200] = { 0 };
int temp = 1;
void solve(int a, int b, int n, int w, bool hole) {
	if (n == 1) {
		if (w != 1) arr[a][b] = temp;
		if (w != 2)arr[a][b + 1] = temp;
		if (w != 3)arr[a + 1][b] = temp;
		if (w != 4)arr[a + 1][b + 1] = temp;
		temp++;
		return;
	}
	if (w == 1) {
		if (hole) {
			if ((x < a + n / 2) && (y < b + n / 2))
				w = 1;
			else if ((x < a + n / 2) && (y >= b + n / 2))
				w = 2;
			else if ((x >= a + n / 2) && (y < b + n / 2))
				w = 3;
			else
				w = 4;
		}
		arr[a + n][b + n] = arr[a + n - 1][b + n] = arr[a + n][b + n - 1] = temp++;
		solve(a, b, n / 2, w, hole);
		solve(a, b + n, n / 2, 3, false);
		solve(a + n, b, n / 2, 2, false);
		solve(a + n, b + n, n / 2, 1, false);
	}
	else if (w == 2) {
		if (hole) {
			if ((x < a + n / 2) && (y < b + n + n / 2))
				w = 1;
			else if ((x < a + n / 2) && (y >= b + n + n / 2))
				w = 2;
			else if ((x >= a + n / 2) && (y < b + n + n / 2))
				w = 3;
			else
				w = 4;
		}
		arr[a + n][b + n] = arr[a + n - 1][b + n - 1] = arr[a + n][b + n - 1] = temp++;
		solve(a, b, n / 2, 4, false);
		solve(a, b + n, n / 2, w, hole);
		solve(a + n, b, n / 2, 2, false);
		solve(a + n, b + n, n / 2, 1, false);
	}
	else if (w == 3) {
		if (hole) {
			if ((x < a + n + n / 2) && (y < b + n / 2))
				w = 1;
			else if ((x < a + n + n / 2) && (y >= b + n / 2))
				w = 2;
			else if ((x >= a + n + n / 2) && (y < b + n / 2))
				w = 3;
			else
				w = 4;
		}
		arr[a + n][b + n] = arr[a + n - 1][b + n - 1] = arr[a + n - 1][b + n] = temp++;
		solve(a, b, n / 2, 4, false);
		solve(a, b + n, n / 2, 3, false);
		solve(a + n, b, n / 2, w, hole);
		solve(a + n, b + n, n / 2, 1, false);
	}
	else {
		if (hole) {
			if ((x < a + n + n / 2) && (y < b + n + n / 2))
				w = 1;
			else if ((x < a + n + n / 2) && (y >= b + n + n / 2))
				w = 2;
			else if ((x >= a + n + n / 2) && (y < b + n + n / 2))
				w = 3;
			else
				w = 4;
		}
		arr[a + n - 1][b + n - 1] = arr[a + n][b + n - 1] = arr[a + n - 1][b + n] = temp++;
		solve(a, b, n / 2, 4, false);
		solve(a, b + n, n / 2, 3, false);
		solve(a + n, b, n / 2, 2, false);
		solve(a + n, b + n, n / 2, w, hole);
	}

}

int main() {
	int k, n = 1;
	int w;
	cin >> k >> y >> x;
	for (int i = 0; i < k; i++) {
		n *= 2;
	}
	x = n - x;
	y--;
	if ((x < n / 2) && (y < n / 2))
		w = 1;
	else if ((x < n / 2) && (y >= n / 2))
		w = 2;
	else if ((x >= n / 2) && (y < n / 2))
		w = 3;
	else
		w = 4;
	solve(0, 0, n / 2, w, true);
	arr[x][y] = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%5d", arr[i][j]);
		}
		cout << endl;
	}
}