#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		cout << endl;

	}
	for (int i = 0; i<n - 1; i++) {
		for (int j = 0; j<n - i - 1; j++) {

			printf("*");
		}
		cout << endl;

	}
}