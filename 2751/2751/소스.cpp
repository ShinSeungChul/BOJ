#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int tempArr[1000002] = { 0 };

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void merge(int arr[], int first, int last) {
	int a, b, len;
	int mid = (first + last) / 2;
	if (first < last) {
		merge(arr, first, mid);
		merge(arr, mid + 1, last);
	}
	a = first;
	b = mid + 1;
	len = last - first + 1;
	for (int i = 0; i < len; i++) {
		if (a == mid + 1)
			tempArr[first + i] = arr[b++];
		else if (b == last + 1)
			tempArr[first + i] = arr[a++];
		else if (arr[a] > arr[b])
			tempArr[first + i] = arr[b++];
		else
			tempArr[first + i] = arr[a++];
	}
	for (int i = first; i < first + len; i++) {
		arr[i] = tempArr[i];
	}
}

int main() {
	int arr[1000002];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	merge(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}