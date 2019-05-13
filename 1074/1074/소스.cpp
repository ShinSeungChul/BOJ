#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<set>
#include<utility>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n, r, c;
	int temp = 1;
	cin >> n >> r >> c;
	int cnt = 0;
	int cur_r = 0, cur_c = 0;
	int a;
	for (int i = 0; i < n; i++) {
		temp *= 2;
	}
	while (temp) {
		temp /= 2;
		if ((cur_r + temp > r) && (cur_c + temp > c)) {

		}
		else if (cur_r + temp > r) {
			cnt += (temp*temp);
			cur_c += temp;
		}
		else if (cur_c + temp > c) {
			cnt += (temp*temp) * 2;
			cur_r += temp;
		}
		else {
			cnt += (temp*temp) * 3;
			cur_r += temp;
			cur_c += temp;
		}
	}
	cout << cnt << endl;
}