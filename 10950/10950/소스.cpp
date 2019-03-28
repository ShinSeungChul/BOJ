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
	int t;
	int a, b;
	cin >> t;
	while (t--) {
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d\n", a + b);
	}
}