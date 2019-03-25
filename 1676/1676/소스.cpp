#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, temp;
	int answer = 0;
	cin >> n;
	for (int i = 5; i <= n; i += 5) {
		temp = i;
		while (temp) {
			if (temp % 5 == 0) {
				answer++;
				temp /= 5;
			}
			else
				break;
		}
	}
	cout << answer << endl;
}