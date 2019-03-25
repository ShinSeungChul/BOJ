#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int arr[9], sum;
	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	sort(arr, arr + 9);
	for (int i = 8; i > 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			sum = 0;
			for (int k = 0; k < 9; k++) {
				sum += arr[k];
				if ((k == i) || (k == j))
					sum -= arr[k];
			}
			if (sum == 100) {
				for (int k = 0; k < 9; k++) {
					if ((k != i) && (k != j))
						cout << arr[k] << endl;
				}
			}
		}
	}
	return 0;
}