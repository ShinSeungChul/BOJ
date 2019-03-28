#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n;
	int sum = 0;
	char* num;
	cin >> n;
	num = new char[n + 1];
	cin >> num;

	for (int i = 0; i < n; i++) {
		sum += *(num + i) - 48;
	}

	cout << sum;

	return 0;
}