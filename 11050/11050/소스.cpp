#include<iostream>
#include<vector>

using namespace std;


int main() {
	int n, k;
	int sum = 1;
	cin >> n >> k;
	for (int i = n; i > n - k; i--)
		sum *= i;
	for (int i = 1; i <= k; i++)
		sum /= i;
	cout << sum << endl;
}