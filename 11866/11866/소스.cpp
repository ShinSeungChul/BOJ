#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, m;
	vector<int> v;
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		v.push_back(i + 1);
	}
	printf("<");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			v.push_back(v[0]);
			v.erase(v.begin());
		}
		if (i == n - 1)
			printf("%d", v[0]);
		else
			printf("%d, ", v[0]);
		v.erase(v.begin());
	}
	printf(">\n");
}