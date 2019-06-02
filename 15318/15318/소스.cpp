#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<utility>
#include<string>
#pragma warning(disable:4996)

using namespace std;

int main() {
	long long n, num, sum = 0, temp = 0, b = 0;
	cin >> n;
	vector<long long> a;
	for (int i = 0; i < n; i++) {
		scanf("%lld", &num);
		a.push_back(num);
		if (i % 2)
			sum -= num;
		else
			sum += num;
	}
	if (n % 2) {
		temp += n;
	}
	else {
		temp -= n;
	}
	for (int i = 0; i < n; i++) {
		if (i % 2) {
			b -= ((i + 1)*a[i]);
		}
		else {
			b += ((i + 1)*a[i]);
		}
	}
	printf("%lld ", b);
	for (int i = 1; i < n; i++) {
		b -= (b * 2);
		if (n % 2) {
			if (i % 2) {
				if (i != 1)
					sum += (2 * a[i - 2]);
				b += sum;
				b += (n*a[i - 1]);
			}
			else {
				sum -= (2 * a[i - 2]);
				b -= sum;
				b += (n*a[i - 1]);
			}
		}
		else {
			if (i % 2) {
				b += sum;
			}
			else {
				b -= sum;
			}
			b -= (n*a[i - 1]);
		}
		printf("%lld ", b);
	}
	cout << endl;
}