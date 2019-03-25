#include <iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main() {
	int n, k, l;
	int tree = 1, count = 0;
	cin >> n >> k >> l;
	while (tree < n) {
		tree *= 2;
	}
	k += tree - 1;
	l += tree - 1;

	while (1) {
		if (k == l) {
			cout << count;
			break;
		}
		k /= 2;
		l /= 2;
		count++;
	}

	return 0;
}