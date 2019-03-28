#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, k, *arr;
	cin >> n >> k;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	printf("%d\n", arr[k - 1]);
	return 0;
}