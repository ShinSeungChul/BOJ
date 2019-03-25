#include<iostream>
#include<string>

using namespace std;

int main() {
	long long n, max = 0, min = 0;
	bool isPositive = false;
	int	*num;
	cin >> n;
	num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	max = num[0];
	for (int i = 0; i < n; i++) {
		if (num[i] >= 0)
			isPositive = true;
		if (isPositive) {
			min += num[i];
			if (min < 0)
				min = 0;
			if (max < min)
				max = min;
		}
		else {
			if (max < num[i])
				max = num[i];
		}
	}
	cout << max << endl;
	return 0;
}