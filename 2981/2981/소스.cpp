#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

long long gcd(long long n1, long long n2) {
	long long temp;
	if (n2 > n1) {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	while (n2 != 0) {
		temp = n1%n2;
		n1 = n2;
		n2 = temp;
	}
	return n1;
}

long long lcm(long long n1, long long n2) {
	return n1*n2 / gcd(n1, n2);
}

int main() {
	int n, temp, len;
	vector<long long> v;
	vector<long long> d;
	cin >> n;
	bool z = false;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	d.push_back(v[n - 1] - v[0]);
	len = sqrt(v[n - 1] - v[0]);
	for (int i = 2; i <= len; i++) {
		if ((v[n - 1] - v[0]) % i == 0) {
			d.push_back(i);
			if (i != (v[n - 1] - v[0]) / i)
				d.push_back((v[n - 1] - v[0]) / i);
		}
	}
	sort(d.begin(), d.end());
	len = d.size();
	for (int i = 0; i < len; i++) {
		temp = v[0] % d[i];
		z = true;
		for (int j = 1; j < n - 1; j++) {
			if (temp != v[j] % d[i]) {
				z = false;
				break;
			}
		}
		if (z) {
			printf("%d ", d[i]);
		}
	}
	cout << endl;
}