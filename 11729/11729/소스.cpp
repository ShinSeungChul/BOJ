#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<set>
#include<utility>

#pragma warning(disable:4996)

using namespace std;

int cnt = 0;
vector<pair<int, int> > v;

void hanoi(int n, int left, int middle, int right) {
	if (n) {
		cnt++;
		hanoi(n - 1, left, right, middle);
		v.push_back(make_pair(left, right));
		hanoi(n - 1, middle, left, right);
	}
}

int main() {
	int n;
	cin >> n;
	hanoi(n, 1, 2, 3);
	cout << cnt << endl;
	vector<pair<int, int> >::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		printf("%d %d\n", (*iter).first, (*iter).second);
	}
}