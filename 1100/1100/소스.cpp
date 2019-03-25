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

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (getchar() == 'F') {
				if (((i + j) % 2) == 0) {
					cnt++;
				}
			}
		}
		getchar();
	}
	cout << cnt << endl;
}