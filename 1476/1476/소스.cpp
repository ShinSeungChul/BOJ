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
	int e, s, m;
	int a, b, c;
	int year = 1;
	int temp;
	cin >> e >> s >> m;
	a = b = c = 1;
	while ((e != a) || (s != b) || (m != c)) {
		a++;
		b++;
		c++;
		year++;
		if (a > 15)
			a -= 15;
		if (b > 28)
			b -= 28;
		if (c > 19)
			c -= 19;
	}
	cout << year << endl;
}