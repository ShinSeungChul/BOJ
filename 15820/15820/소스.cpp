#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	long long c, d;
	int temp = 0;
	for (int i = 0; i < a; i++) {
		scanf("%lld %lld", &c, &d);
		if (c != d)
			temp = 1;
	}
	for (int i = 0; i < b; i++) {
		scanf("%lld %lld", &c, &d);
		if (c != d) {
			if (!temp) {
				temp = 2;
			}
		}
	}
	if (temp == 0) {
		printf("Accepted\n");
	}
	else if (temp == 1) {
		printf("Wrong Answer\n");
	}
	else {
		printf("Why Wrong!!!\n");
	}
}