#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, num, len, z = 0;
	bool a;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	len = v.size();
	for (int i = 0; i < len; i++) {
		a = false;
		if ((v[i] == 4) || (v[i] == 1))
			a = true;
		for (int j = 2; j < v[i] / 2; j++) {
			if (!(v[i] % j))
				a = true;
		}
		if (!a)
			z++;
	}
	cout << z << endl;
	return 0;
}