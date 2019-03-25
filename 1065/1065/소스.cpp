#include <iostream>

using namespace std;

int main() {

	int N; // 1<=N<=1000
	cin >> N;

	if (N <= 99) cout << N << endl;
	else {
		int count = 0;
		for (int i = 100; i <= N; i++) {
			int a, b, c;
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10;

			if (b - a == c - b) count++;
		}
		cout << 99 + count << endl;
	}

	return 0;
}