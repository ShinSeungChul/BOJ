#include<iostream>

using namespace std;

long long fibo[1500001] = { 0, 1, 1 };

long long fib(long long n) {
	if (fibo[n])
		return fibo[n];
	else
		return fibo[n] = (fib(n - 1) + fib(n - 2)) % 1000000;
}

int main() {
	long long n;
	cin >> n;
	cout << fib(n % 1500000) << endl;
}