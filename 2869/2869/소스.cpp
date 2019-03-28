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
	int a, b, v;
	int day = 0;
	cin >> a >> b >> v;
	day = (v - a) / (a - b);
	if ((v - a) != day*(a - b))
		day++;
	cout << day + 1 << endl;
}