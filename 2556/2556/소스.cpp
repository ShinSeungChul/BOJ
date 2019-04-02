#include<iostream>
#include<cstdio>

#pragma(warning:4996)

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			printf("*");
		}
		printf("\n");
	}
}