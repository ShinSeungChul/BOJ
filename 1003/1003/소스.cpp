#include <iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int arr[41];

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if (arr[n]) {
		return arr[n];
	}
	else {
		return arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n, z;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> z;
		if (z == 0) {
			cout << 1 << " " << 0 << endl;
		}
		else if (z == 1) {
			cout << 0 << " " << 1 << endl;
		}
		else {
			cout << fibonacci(z - 1) << " " << fibonacci(z) << endl;
		}
	}

	return 0;
}