#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

vector<pair<int, int> > human;

int main() {
	int n, x, y, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		human.push_back({ x, y });
	}
	for (int i = 0; i < n; i++) {
		num = 1;
		for (int j = 0; j < n; j++) {
			if (human[i].first < human[j].first) {
				if (human[i].second < human[j].second)
					num++;
			}
		}
		cout << num << " ";
	}
	cout << endl;
	return 0;
}