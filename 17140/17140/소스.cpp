#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	map<int, int> mp;
	map<int, int>::iterator iter;
	vector<pair<int, int> > v;
	int r, c, k;
	int arr[101][101] = { 0 };
	int row = 3, col = 3;
	cin >> r >> c >> k;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int size;
	int max_row, max_col;
	int cnt = 0;
	while (1) {
		if (arr[r - 1][c - 1] == k)
			break;
		cnt++;
		if (cnt > 100) {
			cnt = -1;
			break;
		}
		max_row = 0, max_col = 0;
		if (row >= col) {
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					mp[arr[i][j]]++;
					arr[i][j] = 0;
				}
				if (mp.find(0) != mp.end()) {
					mp.erase(0);
				}
				for (iter = mp.begin(); iter != mp.end(); iter++) {
					v.push_back(make_pair((*iter).second, (*iter).first));
				}
				sort(v.begin(), v.end());
				size = v.size();
				if (max_col < size * 2)
					max_col = size * 2;
				for (int j = 0; j < size; j++) {
					arr[i][j * 2] = v[j].second;
					arr[i][j * 2 + 1] = v[j].first;
				}
				mp.clear();
				v.clear();
			}
			col = max_col;
		}
		else {
			for (int i = 0; i < col; i++) {
				for (int j = 0; j < row; j++) {
					mp[arr[j][i]]++;
					arr[j][i] = 0;
				}
				if (mp.find(0) != mp.end()) {
					mp.erase(0);
				}
				for (iter = mp.begin(); iter != mp.end(); iter++) {
					v.push_back(make_pair((*iter).second, (*iter).first));
				}
				sort(v.begin(), v.end());
				size = v.size();
				if (max_row < size * 2)
					max_row = size * 2;
				for (int j = 0; j < size; j++) {
					arr[j * 2][i] = v[j].second;
					arr[j * 2 + 1][i] = v[j].first;
				}
				mp.clear();
				v.clear();
			}
			row = max_row;
		}
	}
	cout << cnt << endl;
}