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
	int t, n;
	int cycle;
	int	cur, first, temp;
	int arr[1002];
	cin >> t;
	while (t--) {
		cycle = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i + 1]);
		}
		for (int i = 1; i < n + 1; i++) {
			if (arr[i]) {
				first = cur = i;
				while (1) {
					if (first == arr[cur]) {
						cycle++;
						arr[cur] = 0;
						break;
					}
					temp = arr[cur];
					arr[cur] = 0;
					cur = temp;
				}
			}
		}
		printf("%d\n", cycle);
	}
}