#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, k, p;
	vector<double> v;
	double a, b;
	double max_d = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		max_d = 0;
		scanf("%d", &p);
		for (int j = 0; j < p; j++) {
			scanf("%lf %lf", &a, &b);
			if (max_d < a*a + b*b)
				max_d = a*a + b*b;
		}
		v.push_back(max_d);
	}
	sort(v.begin(), v.end());
	printf("%.2f\n", v[k - 1]);
}