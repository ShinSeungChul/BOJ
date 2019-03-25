#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int n, min = 0, max = 0, max1 = 0, max2;
	double a = 0;
	bool k = false;
	int x[8001] = { 0 };
	int arr[500001];
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	min = max = arr[0];
	for (int i = 0; i < n; i++) {
		a += arr[i];
		x[arr[i] + 4000]++;
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	a /= n;
	for (int i = 0; i < 8001; i++) {
		if (max1 < x[i]) {
			max1 = x[i];
		}
	}
	for (int i = 0; i < 8001; i++) {
		if (max1 == x[i]) {
			if (k) {
				max2 = i; break;
			}
			k = true; max2 = i;
		}
	}
	max2 -= 4000;
	printf("%.f\n%d\n%d\n%d\n", a, arr[n / 2], max2, max - min);
	return 0;
}