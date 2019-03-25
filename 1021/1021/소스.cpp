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
	int n, m, num, cnt = 0;
	int cur;
	deque<int> dq;
	vector<int> popNum;
	cin >> n;
	for (int i = 0; i < n; i++) {
		dq.push_back(i + 1);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		popNum.push_back(num);
	}
	while (m) {
		cur = popNum[0];
		popNum.erase(popNum.begin());
		m--;
		if ((cur - 1) < (n - cur + 1)) {
			cnt += cur - 1;
			for (int i = 0; i < cur - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			dq.pop_front();
			for (int i = 0; i < m; i++) {
				popNum[i] -= cur;
				if (popNum[i] < 1)
					popNum[i] += n;
			}
			n--;
		}
		else {
			cnt += (n - cur + 1);
			for (int i = 0; i < (n - cur + 1); i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			dq.pop_front();
			for (int i = 0; i < m; i++) {
				popNum[i] += (n - cur);
				if (popNum[i] > n)
					popNum[i] -= n;
			}
			n--;
		}
	}
	cout << cnt << endl;
}