#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<utility>
#include<string>
#pragma warning(disable:4996)

using namespace std;

string s;
bool visit[10] = { false };
set<string> st;
int s_size;

void solve(int cnt, string v, string ans) {
	if (cnt == s_size) {
		st.insert(ans);
		return;
	}
	for (int i = 0; i < s_size; i++) {
		if (!visit[i]) {
			if (i == 0) {
				if (visit[i + 1]) {
					visit[i] = true;
					solve(cnt + 1, s[i] + v, ans + s[i] + v);
					visit[i] = false;
				}
			}
			else if (i == s_size - 1) {
				if (visit[i - 1]) {
					visit[i] = true;
					solve(cnt + 1, v + s[i], ans + v + s[i]);
					visit[i] = false;
				}
			}
			else {
				if (visit[i - 1]) {
					visit[i] = true;
					solve(cnt + 1, v + s[i], ans + v + s[i]);
					visit[i] = false;
				}
				else if (visit[i + 1]) {
					visit[i] = true;
					solve(cnt + 1, s[i] + v, ans + s[i] + v);
					visit[i] = false;
				}
			}
		}
	}
}

int main() {
	string temp = "";
	getline(cin, s);
	s_size = s.size();
	for (int i = 0; i < s_size; i++) {
		temp = "";
		visit[i] = true;
		temp += s[i];
		solve(1, temp, temp);
		visit[i] = false;
	}
	cout << st.size() << endl;
}