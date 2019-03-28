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
	int t, n, num;
	char p[200002], ch, a;
	bool error, reverse;
	deque<int> dq;
	cin >> t;
	while (t--) {
		error = false;
		reverse = false;
		scanf("%s", p);
		scanf("%d", &n);

		scanf("%c", &a);
		scanf("%c", &a);
		for (int i = 0; i < n; i++) {
			scanf("%d,", &num);
			dq.push_back(num);
		}

		scanf("%c", &a);

		for (int i = 0; p[i] != '\0'; i++) {
			if (p[i] == 'R') {
				reverse = !reverse;
			}
			else {
				if (!n) {
					error = true;
					break;
				}
				if (reverse)
					dq.pop_back();
				else
					dq.pop_front();
				n--;
			}
		}
		if (error) {
			printf("error\n");
		}
		else {
			printf("[");
			if (reverse) {
				for (int i = 0; i < n; i++) {
					if (i != n - 1)
						printf("%d,", dq.back());
					else
						printf("%d", dq.back());
					dq.pop_back();
				}
			}
			else {
				for (int i = 0; i < n; i++) {
					if (i != n - 1)
						printf("%d,", dq.front());
					else
						printf("%d", dq.front());
					dq.pop_front();
				}
			}
			printf("]\n");
		}
	}
}