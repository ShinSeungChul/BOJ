#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int arr[1000002] = { 0, 1 };
	int min, max;
	cin >> min >> max;
	for (int i = 2; i <= max; i++) {
		for (int j = 2; j*i <= max; j++) {
			arr[i*j] = 1;
		}
	}
	for (int i = min; i < max + 1; i++) {
		if (!arr[i])
			printf("%d\n", i);
	}
}