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
	int a;
	int num = 0;
	cin >> n;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		if (n == a)
			num++;
	}
	cout << num << endl;
}