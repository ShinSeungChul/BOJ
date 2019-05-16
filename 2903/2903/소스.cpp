#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 2;
	for (int i = 0; i<n; i++) {
		cnt *= 2;
		cnt--;
	}
	cout << cnt*cnt << endl;
}