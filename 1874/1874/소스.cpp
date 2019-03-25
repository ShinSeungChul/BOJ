#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int temp, size = 0;
	long long s[1000002], a = 0;
	vector<int> stack;
	char p[2000004];
	int n, num, x = 1;
	bool can;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int j = 0; j < n; j++) {
		temp = s[j] + 1;
		for (int i = x; i < temp; i++) {
			stack.push_back(i);
			size++;
			p[a++] = '+';
			x++;
		}
		if (s[j] == stack[size - 1]) {
			p[a++] = '-';
			stack.pop_back();
			size--;
		}
		else {
			cout << "NO\n";
			return 0;
		}
	}
	for (int i = 0; i < a; i++) {
		cout << p[i] << "\n";
	}
	return 0;
}