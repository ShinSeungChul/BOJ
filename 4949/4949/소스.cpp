#include<iostream>
#include<string>
#include<cstdio>
#include<stack>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int main() {
	stack<char> s;
	char c;
	int size;
	vector<string> answer;
	bool fin = false;
	string str;
	bool balance = true;
	while (!fin) {
		getline(cin, str);
		size = str.size();
		balance = true;
		for (int i = 0; i < size; i++) {
			if ((size == 1) && (str[0] == '.')) {
				fin = true;
			}
			if (str[i] == '(') {
				s.push('(');
			}
			else if (str[i] == ')') {
				if ((s.empty()) || (s.top() != '(')) {
					balance = false;
					break;
				}
				else
					s.pop();
			}
			else if (str[i] == '[') {
				s.push('[');
			}
			else if (str[i] == ']') {
				if ((s.empty()) || (s.top() != '[')) {
					balance = false;
					break;
				}
				else
					s.pop();
			}
		}
		if (!fin) {
			if ((balance) && (s.empty()))
				answer.push_back("yes");
			else
				answer.push_back("no");
		}
		while (!s.empty()) {
			s.pop();
		}
	}
	size = answer.size();
	for (int i = 0; i < size; i++) {
		cout << answer[i] << endl;
	}
}