#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, m;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i<n; i++) {
		v.push_back(i + 1);
	}
	int temp;
	int a, b;
	vector<int>::iterator iter;
	for (int i = 0; i<m; i++) {
		scanf("%d %d", &a, &b);
		iter = v.begin();
		while ((*iter)<b) {
			if ((a <= (*iter)) && ((*iter)<b))
				v.erase(iter);
			else
				iter++;
		}
	}
	cout << v.size() << endl;
}