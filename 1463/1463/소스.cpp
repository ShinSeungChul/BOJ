#include <iostream>
#include<string>
#include<cstdio>
#include<math.h>

#pragma warning(disable : 4996)

using namespace std;

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main() {
	int n;
	short arr[1000001] = { 0 };
	cin >> n;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i < 1000001; i++) {
		if ((!(i % 2)) && (!(i % 3)))
			arr[i] = min(arr[i - 1], min(arr[i / 2], arr[i / 3])) + 1;
		else if (!(i % 2))
			arr[i] = min(arr[i - 1], arr[i / 2]) + 1;
		else if (!(i % 3))
			arr[i] = min(arr[i - 1], arr[i / 3]) + 1;
		else
			arr[i] = arr[i - 1] + 1;
	}
	cout << arr[n] << endl;
}