#include <iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main() {
	int n, temp, total;
	int *a;
	int *b;

	cin >> n;

	a = new int[n];
	b = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			if (b[i] < b[j]) {
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	total = 0;
	for (int i = 0; i < n; i++) {
		total += (a[i] * b[i]);
	}

	cout << total << endl;
	return 0;
}