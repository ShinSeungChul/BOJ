#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int a[3], temp;
	cin >> a[0] >> a[1] >> a[2];

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << a[1];

	return 0;
}