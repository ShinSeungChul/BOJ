#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	bool prime_num[2000000] = { true, true };
	vector<int> v;
	vector<int> num;
	int temp;
	map<int, int> m;
	temp = sqrt(2000000);
	for (int i = 2; i < temp; i++) {
		if (!prime_num[i]) {
			for (int j = i * 2; j < 2000000; j += i) {
				prime_num[j] = true;
			}
		}
	}
	v.push_back(2);
	for (int i = 3; i < 2000000; i += 2) {
		if (!prime_num[i])
			v.push_back(i);
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		num.push_back(temp);
	}
	int size = v.size();
	int max = 0;
	for (int i = 0; i < size; i++) {
		if ((v[i] * (n / 2)) > 2000000)
			break;
		for (int j = 0; j < n; j++) {
			temp = num[j] % v[i];
			m[temp]++;
			if (max < m[temp])
				max = m[temp];
		}
		m.clear();
	}
	cout << max << endl;
}