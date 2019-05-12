#include<iostream>
#include<cstdio>
#include<vector>
#include<string>

#pragma warning(disable:4996)

using namespace std;

int main() {
	char c;
	vector<char> s;
	vector<string> v;
	string a;
	while (1) {
		c = getchar();
		if (c == '\n') {
			a = "";
			if ((s[0] == 'E') && (s[1] == 'N') && (s[2] == 'D')) {
				break;
			}
			while (!s.empty()) {
				a += s[s.size() - 1];
				s.pop_back();
			}
			v.push_back(a);
		}
		else
			s.push_back(c);
	}
	while (!v.empty()) {
		cout << v[0] << endl;
		v.erase(v.begin());
	}
}