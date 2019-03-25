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
	int a, b, ball = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		if ((a == ball) || (b == ball)) {
			if (a == ball)
				ball = b;
			else
				ball = a;
		}
	}
	cout << ball << endl;
}