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
	cin >> n >> m;
	vector<int> v;
	int left = 0, right = 0;
	int num;
	int sum;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	sum = v[0];
	while (1) {
		if (sum == m) {
			cnt++;
			sum -= v[left];
			left++;
			right++;
			if (right == n)
				break;
			sum += v[right];
		}
		else if (sum < m) {
			right++;
			if (right == n)
				break;
			sum += v[right];
		}
		else if (sum > m) {
			sum -= v[left];
			left++;
		}
	}
	cout << cnt << endl;
}