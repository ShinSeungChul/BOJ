#include<iostream>

using namespace std;

int main() {
	int num, temp;
	int cycle = 0;
	cin >> num;
	temp = num;
	while (1) {
		temp = (((temp % 10) * 10) + ((temp / 10 + temp % 10) % 10));
		cycle++;
		if (temp == num) {
			cout << cycle;
			break;
		}
	}

	return 0;
}