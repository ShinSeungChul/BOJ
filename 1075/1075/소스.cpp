#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n, f;
	cin >> n >> f;
	n = n - (n % 100);
	for (int i = 0; i<100; i++) {
		if (n%f == 0) {
			if (i<10) {
				cout << 0;
			}
			cout << i << endl;
			break;
		}
		n++;
	}
}