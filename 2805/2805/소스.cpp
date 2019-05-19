#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#include<set>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, m;
	long long num;
	int cnt = 1;
	long long sum = 0;
	int temp;
	long long h;
	cin >> n >> m;
	vector<long long> v;
	v.push_back(0);
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	temp = n;
	h = v[temp];
	while (1) {
		while (v[temp - 1] == v[temp]) {
			temp--;
			cnt++;
		}
		if (m > (sum + (v[temp] - v[temp - 1])*cnt)) {
			sum += ((v[temp] - v[temp - 1])*cnt);
			h -= (v[temp] - v[temp - 1]);
		}
		else {
			h -= ((m - sum) / cnt);
			if ((m - sum) % cnt)
				h--;
			break;
		}
		temp--;
		cnt++;
	}
	cout << h << endl;
}