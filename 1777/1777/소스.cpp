#include<iostream>
#include<vector>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n;
	vector<int> v;
	cin >> n;
	int num;
	for (int i = 0; i<n; i++) {
		scanf("%d", &num);
		v.insert(v.end() - num, i + 1);
	}
	for (int i = 0; i<n; i++) {
		printf("%d ", v[i]);
	}
	cout << endl;
}