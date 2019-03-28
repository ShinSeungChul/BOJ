#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>

#pragma warning(disable:4996)

using namespace std;

vector<int> dq;

void push_front(int n) {
	dq.insert(dq.begin(), n);
}

void push_back(int n) {
	dq.push_back(n);
}

void pop_front() {
	if (!dq.size())
		cout << -1 << endl;
	else {
		cout << dq[0] << endl;
		dq.erase(dq.begin());
	}
}

void pop_back() {
	if (!dq.size())
		cout << -1 << endl;
	else {
		cout << dq[dq.size() - 1] << endl;
		dq.pop_back();
	}
}

int size() {
	return dq.size();
}

int empty() {
	return dq.size() ? 0 : 1;
}

int front() {
	if (!dq.size())
		return -1;
	return dq[0];
}

int back() {
	if (!dq.size())
		return -1;
	return dq[dq.size() - 1];
}

int main() {
	char choice[15];
	int n, num;
	cin >> n;
	while (n--) {
		cin >> choice;
		if (!strcmp(choice, "push_front")) {
			cin >> num;
			push_front(num);
		}
		else if (!strcmp(choice, "push_back")) {
			cin >> num;
			push_back(num);
		}
		else if (!strcmp(choice, "pop_front")) {
			pop_front();
		}
		else if (!strcmp(choice, "pop_back")) {
			pop_back();
		}
		else if (!strcmp(choice, "size")) {
			cout << size() << endl;
		}
		else if (!strcmp(choice, "empty")) {
			cout << empty() << endl;
		}
		else if (!strcmp(choice, "front")) {
			cout << front() << endl;
		}
		else if (!strcmp(choice, "back")) {
			cout << back() << endl;
		}
	}
}