#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

#pragma warning(disable: 4996)

int main() {
	int n;
	int num;
	cin >> n;
	vector<int> v;
	for (int i = 0; i<n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int size = v.size();
	cout << v[0] * v[size - 1] << endl;
}