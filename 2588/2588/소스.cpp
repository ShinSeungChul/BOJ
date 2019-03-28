#include<iostream>

using namespace std;

int main() {
	int a, b;
	int temp;
	int sum = 0;
	cin >> a >> b;
	temp = a*(b % 10);
	cout << temp << endl;
	sum += temp;
	b /= 10;
	temp = a*(b % 10);
	cout << temp << endl;
	sum += temp * 10;
	b /= 10;    temp = a*(b % 10);
	cout << temp << endl;
	sum += temp * 100;
	b /= 10;
	cout << sum << endl;

}