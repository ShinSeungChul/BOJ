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
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += (n*n);
	}
	cout << sum % 10 << endl;
}