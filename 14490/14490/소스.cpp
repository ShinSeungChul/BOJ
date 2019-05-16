#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n1, n2;
	int div_num;
	scanf("%d:%d", &n1, &n2);
	if (n1<n2)
		div_num = n1;
	else
		div_num = n2;
	for (int i = div_num; i>0; i--) {
		if ((n1%i == 0) && (n2%i == 0)) {
			n1 /= i;
			n2 /= i;
		}
	}
	printf("%d:%d\n", n1, n2);
}