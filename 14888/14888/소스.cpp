#include<iostream>
#include<cstdio>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int n, num;
int arr[4] = { 0 };
vector<int> v;
int max_num = -2000000000, min_num = 2000000000;

void solve(int sum, int cur) {
	if (cur == n - 1) {
		if (max_num < sum)
			max_num = sum;
		if (min_num > sum)
			min_num = sum;
	}
	for (int i = 0; i < 4; i++) {
		if (arr[i]) {
			if (i == 0) {
				arr[i]--;
				solve(sum + v[cur + 1], cur + 1);
				arr[i]++;
			}
			else if (i == 1) {
				arr[i]--;
				solve(sum - v[cur + 1], cur + 1);
				arr[i]++;
			}
			else if (i == 2) {
				arr[i]--;
				solve(sum * v[cur + 1], cur + 1);
				arr[i]++;
			}
			else {
				arr[i]--;
				solve(sum / v[cur + 1], cur + 1);
				arr[i]++;
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	solve(v[0], 0);
	cout << max_num << endl << min_num << endl;
}