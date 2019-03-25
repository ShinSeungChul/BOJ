#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n;
	double max = 0, avr = 0;
	double *arr;
	cin >> n;
	arr = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
		avr += arr[i];
	}
	avr /= n;
	printf("%.2f", avr);

	return 0;
}