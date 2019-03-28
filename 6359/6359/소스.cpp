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
	int n;
	int  t;
	cin >> t;
	while (t--) {
		int room[101] = { 0 };
		room[0] = 1;
		int cnt = 0;
		scanf("%d", &n);
		for (int i = 2; i <= n; i++) {
			for (int j = i; j <= n; j = j + i) {
				if (room[j])
					room[j] = 0;
				else
					room[j] = 1;
			}
		}
		for (int i = 1; i <= n; i++) {
			if (!room[i])
				cnt++;
		}
		cout << cnt << endl;
	}
}