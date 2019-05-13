#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<set>
#include<utility>
#include<algorithm>
#include<map>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num)
			v.push_back(num);
		else
			v.pop_back();
	}
	vector<int>::iterator iter;
	int sum = 0;
	for (iter = v.begin(); iter != v.end(); iter++) {
		sum += (*iter);
	}
	cout << sum << endl;
}