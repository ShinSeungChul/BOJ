#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

bool compare(const int a, const int b) {
	return a > b;
}

int main() {
	long long n;
	int len = 0;
	vector<int> v;
	cin >> n;
	while (n) {
		v.push_back(n % 10);
		n /= 10;
		len++;
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < len; i++)
		printf("%d", v[i]);
	cout << endl;
	return 0;
}