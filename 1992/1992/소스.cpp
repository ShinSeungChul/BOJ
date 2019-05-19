#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>

#pragma warning(disable:4996)

using namespace std;

char arr[65][65];
int dx[4] = { 0, 0, 1, 1 };
int dy[4] = { 0, 1, 0, 1 };
string s;

void solve(int n, int x, int y) {
	if (!n)
		return;
	s.append("(");
	if (n == 1) {
		for (int i = 0; i < 4; i++) {
			if (arr[x + dx[i]][y + dy[i]] == '1')
				s.append("1");
			else if (arr[x + dx[i]][y + dy[i]] == '0')
				s.append("0");
		}
	}
	solve(n / 2, x, y);
	solve(n / 2, x, y + n);
	solve(n / 2, x + n, y);
	solve(n / 2, x + n, y + n);
	s.append(")");
}

int main() {
	int n;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		getchar();
		for (int j = 0; j < n; j++) {
			c = getchar();
			arr[i][j] = c;
		}
	}
	int temp1, temp2;
	solve(n / 2, 0, 0);
	while (1) {
		temp1 = s.find("(0000)");
		if (temp1 != -1) {
			s.replace(temp1, 6, "0");
		}
		temp2 = s.find("(1111)");
		if (temp2 != -1) {
			s.replace(temp2, 6, "1");
		}
		if ((temp1 == -1) && (temp2 == -1))
			break;
	}
	cout << s << endl;
}