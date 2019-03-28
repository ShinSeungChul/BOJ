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
	int max = 0, index;
	int sum = 0;
	int n;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> n;
			sum += n;
		}
		if (max < sum) {
			max = sum;
			index = i + 1;
		}
	}
	cout << index << ' ' << max << endl;
}