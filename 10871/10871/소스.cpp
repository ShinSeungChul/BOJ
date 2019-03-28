#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n, x;
	int *arr;

	cin >> n >> x;
	arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x)
			cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}