#include<iostream>

using namespace std;

int main() {
	int total_price;
	int n;
	cin >> total_price;
	for (int i = 0; i<9; i++) {
		cin >> n;
		total_price -= n;
	}
	cout << total_price << endl;
}