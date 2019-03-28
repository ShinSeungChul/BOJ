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
	int n, min, max, num;
	cin >> n;
	scanf("%d", &num);
	max = min = num;

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}
	cout << min << " " << max << endl;
}