#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	string s;
	vector<string> v;
	int n, l;
	cin >> n >> l;
	getchar();
	for (int i = 0; i<n; i++) {
		getline(cin, s, '\n');
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	cout << v[l - 1] << endl;
}