#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

class stack {
private:
	vector<int> s;
	int len = 0;
public:
	void push(int num) {
		s.push_back(num);
		len++;
	}

	int pop() {
		int num;
		if (!len)
			num = -1;
		else {
			num = s.at(len - 1);
			s.pop_back();
			len--;
		}
		return num;
	}

	int size() {
		return len;
	}

	int empty() {
		return (len) ? 0 : 1;
	}

	int top() {
		return (len) ? s.at(len - 1) : -1;
	}

};

int main() {
	stack s;
	char ch[6];
	int num;
	int testCase;
	cin >> testCase;
	while (testCase--) {
		cin >> ch;
		if (!strcmp(ch, "push")) {
			cin >> num;
			s.push(num);
		}
		else if (!strcmp(ch, "pop")) {
			cout << s.pop() << endl;
		}
		else if (!strcmp(ch, "size")) {
			cout << s.size() << endl;
		}
		else if (!strcmp(ch, "empty")) {
			cout << s.empty() << endl;
		}
		else if (!strcmp(ch, "top")) {
			cout << s.top() << endl;
		}
	}
	return 0;
}