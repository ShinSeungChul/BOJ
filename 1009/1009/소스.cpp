#include<iostream>
#include<cstdio>

#pragma warning(disable : 4996)

using namespace std;

int main() {
	int t;
	int per;
	cin >> t;
	int arr[100000] = { 0 };
	int a, b;
	while (t--) {
		scanf("%d %d", &a, &b);
		arr[0] = arr[1] = a = a % 10;
		per = 0;
		while (1) {
			a = a*arr[1];
			a = a % 10;
			per++;
			if (a == arr[1])
				break;
			arr[0] = arr[per + 1] = a;
		}
		if (arr[b%per] == 0)
			printf("10\n");
		else
			printf("%d\n", arr[b%per]);
	}
}