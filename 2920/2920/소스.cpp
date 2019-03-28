#include<iostream>
#include<string>

using namespace std;

int main() {
	int arr[8], a = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 7; i++) {
		if ((arr[i] - arr[i + 1]) == -1) {
			a--;
		}
		else if ((arr[i] - arr[i + 1]) == 1) {
			a++;
		}
	}
	if (a == -7)
		cout << "ascending" << endl;
	else if (a == 7)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;
	return 0;
}