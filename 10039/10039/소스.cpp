#include<iostream>
#include<string>

using namespace std;

int main() {
	int arr[5];
	int avr = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] < 40)
			arr[i] = 40;
		avr += arr[i];
	}
	cout << avr / 5 << endl;
	return 0;
}