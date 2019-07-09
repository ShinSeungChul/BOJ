#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, w;
	cin >> n >> w;
	vector<long long> three;
	vector<long long> five;
	vector<long long> sum_three;
	vector<long long> sum_five;
	long long a, b;
	int temp = 0;
	sum_three.push_back(0);
	sum_five.push_back(0);
	for (int i = 0; i < n; i++) {
		scanf("%lld %lld", &a, &b);
		b = b*(-1);
		if (a == 3)
			three.push_back(b);
		else
			five.push_back(b);
	}
	sort(three.begin(), three.end());
	sort(five.begin(), five.end());
	int size = three.size();
	for (int i = 0; i < size; i++) {
		sum_three.push_back(sum_three[temp++] + three[i]);
	}
	size = five.size();
	temp = 0;
	int size1, size2;
	for (int i = 0; i < size; i++) {
		sum_five.push_back(sum_five[temp++] + five[i]);
	}
	size1 = three.size();
	size1 = min(size1, w / 3);
	int five_size = five.size();
	long long ans = 0;
	for (int i = 0; i <= size1; i++) {
		size2 = min(five_size, ((w - (i * 3)) / 5));
		ans = min(ans, sum_three[i] + sum_five[size2]);
	}
	ans *= -1;
	cout << ans << endl;
}