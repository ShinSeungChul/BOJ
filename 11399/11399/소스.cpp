#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>
#include<stack>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n;
	int num;
	int solution = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		solution += v[i] * (n - i);
	}
	cout << solution << endl;
}