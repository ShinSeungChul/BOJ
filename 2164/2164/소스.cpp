#include<iostream>
#include<string>
#include<cstdio>
#include<queue>

#pragma warning(disable:4996)

using namespace std;

int main() {
	queue<int> q;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (n != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
		n--;
	}
	cout << q.front() << endl;
}