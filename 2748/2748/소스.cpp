#include <iostream>

using namespace std;

long long fib[91];

long long fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else if (fib[n])
		return fib[n];
	else
		return fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;

	return 0;
}