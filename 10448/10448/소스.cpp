#include<iostream>
#include<cstdio>
#include<vector>

#pragma warning(disable:4996)

using namespace std;


int main() {
	int eureka[45] = { 0 };
	int arr[1001] = { 0 };
	for (int i = 0; i < 45; i++) {
		eureka[i] = (i*(i + 1)) / 2;
	}
	for (int i = 1; i < 45; i++) {
		for (int j = i; j < 45; j++) {
			for (int k = j; k < 45; k++) {
				if ((eureka[i] + eureka[j] + eureka[k]) <= 1000) {
					arr[eureka[i] + eureka[j] + eureka[k]] = 1;
				}
			}
		}
	}
	int t, num;
	cin >> t;
	while (t--) {
		scanf("%d", &num);
		if (arr[num])
			printf("1\n");
		else
			printf("0\n");
	}
}