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
	vector<int> s;
	int x;
	int sum = 64, temp;
	cin >> x;
	if (x == 64) {
		cout << 1 << endl;
		exit(0);
	}
	s.push_back(64);
	while (1) {
		temp = s[s.size() - 1] / 2;
		s.pop_back();
		s.push_back(temp);
		s.push_back(temp);
		if ((sum - temp) >= x) {
			sum -= temp;
			s.pop_back();
		}
		if (sum == x) {
			cout << s.size() << endl;
			break;
		}
	}
}	