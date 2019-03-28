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

long long fib[70] = { 0 };

long long solve(int n) {
	if (fib[n])
		return fib[n];
	else
		return fib[n] = solve(n - 1) + solve(n - 2) + solve(n - 3) + solve(n - 4);
}

int main() {
	fib[0] = fib[1] = 1;
	fib[2] = 2;
	fib[3] = 4;
	int n;
	int num;
	cin >> n;
	while (n--) {
		scanf("%d", &num);
		cout << solve(num) << endl;
	}
}