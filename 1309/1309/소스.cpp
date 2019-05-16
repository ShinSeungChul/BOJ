#include<iostream>
#include<vector>

using namespace std;

#define MOD 9901

int main() {
	int n;
	cin >> n;
	int answer = 1;
	int temp1 = 0;
	int temp2 = 1;
	int temp3;
	for (int i = 1; i < n; i++) {
		temp3 = temp2;
		temp2 = (temp2 + temp2 + temp1) % MOD;
		temp1 = temp3;
		answer = (answer + temp2) % MOD;
	}
	answer = (answer + answer + 1) % MOD;
	cout << answer << endl;
}