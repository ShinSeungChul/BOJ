#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int k;
int saw[4] = { 0 };
int mag[8] = { 6, 2, 6, 2, 6, 2, 6, 2 };
char c[9];
int temp;

void solve_left(int cur, int clock) {
	if ((cur == 0) || (clock == 0))
		return;
	if (((saw[cur] >> mag[cur * 2]) & 1) != ((saw[cur - 1] >> mag[cur * 2 - 1]) & 1)) {
		if (clock == 1) {
			solve_left(cur - 1, -1);
			mag[cur * 2 - 1]++;
			mag[cur * 2 - 2]++;
		}
		else if (clock == -1) {
			solve_left(cur - 1, 1);
			mag[cur * 2 - 1] += 7;
			mag[cur * 2 - 2] += 7;
		}
		else {
			solve_left(cur - 1, 0);
		}
		mag[cur * 2 - 1] %= 8;
		mag[cur * 2 - 2] %= 8;
	}
	else {
		solve_left(cur - 1, 0);
	}
}

void solve_right(int cur, int clock) {
	if ((cur == 3) || (clock == 0))
		return;
	if (((saw[cur] >> mag[cur * 2 + 1]) & 1) != ((saw[cur + 1] >> mag[cur * 2 + 2]) & 1)) {
		if (clock == 1) {
			solve_right(cur + 1, -1);
			mag[cur * 2 + 2]++;
			mag[cur * 2 + 3]++;
		}
		else if (clock == -1) {
			solve_right(cur + 1, 1);
			mag[cur * 2 + 2] += 7;
			mag[cur * 2 + 3] += 7;
		}
		else {
			solve_right(cur + 1, 0);
		}
		mag[cur * 2 + 2] %= 8;
		mag[cur * 2 + 3] %= 8;
	}
	else {
		solve_right(cur + 1, 0);
	}
}

int main() {
	for (int i = 0; i < 4; i++) {
		temp = 1;
		scanf("%s", &c);
		for (int j = 0; j < 8; j++) {
			saw[i] += (c[j] - '0')*temp;
			temp *= 2;
		}
	}
	cin >> k;
	int a, b;
	while (k--) {
		scanf("%d %d", &a, &b);
		solve_left(a - 1, b);
		solve_right(a - 1, b);
		if (b == 1) {
			mag[(a - 1) * 2] += 7;
			mag[(a - 1) * 2 + 1] += 7;
		}
		else if (b == -1) {
			mag[(a - 1) * 2]++;
			mag[(a - 1) * 2 + 1]++;
		}
		mag[(a - 1) * 2] %= 8;
		mag[(a - 1) * 2 + 1] %= 8;
	}
	temp = 1;
	int ans = 0;
	for (int i = 0; i < 4; i++) {
		ans += (((saw[i] >> ((mag[i * 2] + 2) % 8)) & 1)*temp);
		temp *= 2;
	}
	cout << ans << endl;
}