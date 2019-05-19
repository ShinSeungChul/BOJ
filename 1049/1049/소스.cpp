#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	int n, m;
	int min1, min2;
	int n1, n2;
	cin >> n >> m;
	cin >> min1 >> min2;
	for (int i = 1; i < m; i++) {
		scanf("%d %d", &n1, &n2);
		if (min1 > n1)
			min1 = n1;
		if (min2 > n2)
			min2 = n2;
	}
	cout << min(min(n*min2, ((n / 6) + 1)*min1), (n / 6)*min1 + (n % 6)*min2) << endl;
}