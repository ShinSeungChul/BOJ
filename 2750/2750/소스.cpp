#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	vector<int> a;
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		a.push_back(num);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}