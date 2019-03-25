#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	long long roomNum;
	int max, arr[10] = { 0 };
	cin >> roomNum;
	if (!roomNum)
		arr[0]++;
	while (roomNum) {
		arr[roomNum % 10]++;
		roomNum /= 10;
	}
	if ((arr[6] + arr[9]) % 2)
		arr[6] = (arr[6] + arr[9]) / 2 + 1;
	else
		arr[6] = (arr[6] + arr[9]) / 2;
	max = 0;
	for (int i = 0; i < 9; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;
	return 0;
}