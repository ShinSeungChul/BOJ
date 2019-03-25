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

long long f[91] = { 0 };

long long fib(int n) {
	if (f[n])
		return f[n];
	else
		return f[n] = fib(n - 1) + fib(n - 2);
}

int main() {
	f[1] = 1;
	f[2] = 1;
	int n;
	cin >> n;
	cout << fib(n) << endl;
}