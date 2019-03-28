#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>

using namespace std;

int main() {
	int num1, num2, n1 = 0, n2 = 0;
	cin >> num1 >> num2;
	for (int i = 0; i < 3; i++) {
		n1 *= 10;
		n1 += num1 % 10;
		num1 /= 10;
		n2 *= 10;
		n2 += num2 % 10;
		num2 /= 10;
	}
	if (n1 > n2)
		cout << n1 << endl;
	else
		cout << n2 << endl;
}