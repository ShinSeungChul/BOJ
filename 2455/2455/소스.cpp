#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int sum = 0;
	int max = 0;
	int a, b;
	for (int i = 0; i < 4; i++) {
		cin >> a >> b;
		sum = sum - a + b;
		if (max < sum)
			max = sum;
	}
	cout << max << endl;
}