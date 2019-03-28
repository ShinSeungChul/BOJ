#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable: 4996)

using namespace std;

int main() {
	int arr[10000] = { 0 };
	int temp, a;

	for (int i = 0; i < 10000; i++) {
		temp = a = i + 1;
		while (1) {
			temp += a % 10;
			a /= 10;
			if (!a)
				break;
		}
		if (temp - 1<10000)
			arr[temp - 1] = 1;
	}

	for (int i = 0; i < 10000; i++) {
		if (!arr[i])
			printf("%d\n", i + 1);
	}
	return 0;
}