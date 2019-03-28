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
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (!a) {
			if (!b) {
				break;
			}
		}
		printf("%d\n", a + b);
	}
}