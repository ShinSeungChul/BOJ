#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	long long answer = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
		answer *= i;
	cout << answer << endl;
}