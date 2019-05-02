#include<iostream>
#include<cstdio>

using namespace std;

#pragma warning(disable:4996)

int main() {
	int n, b, c;
	int a[1000001] = { 0 };
	long long cnt = 0;
	int num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	cin >> b >> c;
	cnt = n;
	for (int i = 0; i < n; i++) {
		num = a[i] - b;
		if (num > 0) {
			cnt += (num / c);
			if (num%c)
				cnt++;
		}
	}
	cout << cnt << endl;
}