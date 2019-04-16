#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

#pragma warning(disable : 4996)

int main() {
	int r, b;
	int temp;
	cin >> r >> b;
	temp = r - 4;
	temp /= 2;
	for (int i = 1; i<temp; i++) {
		if (((temp - i)*i) == b) {
			cout << temp - i + 2 << " " << i + 2 << endl;
			break;
		}
	}
}