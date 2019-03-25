#include<iostream>
#include<string>

using namespace std;

int main() {
	long long a, b, c;
	long long mul;
	int arr[10] = { 0 };
	cin >> a >> b >> c;
	mul = a*b*c;
	while (mul) {
		arr[mul % 10]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}