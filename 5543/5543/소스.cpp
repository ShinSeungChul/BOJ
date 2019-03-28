#include<iostream>

using namespace std;

int main() {
	int min;
	int min2;
	int n;
	cin >> min;
	for (int i = 0; i<2; i++) {
		cin >> n;
		if (n<min)
			min = n;
	}
	cin >> min2;
	cin >> n;
	if (n<min2)
		min2 = n;
	cout << min + min2 - 50 << endl;
}