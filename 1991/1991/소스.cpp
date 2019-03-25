#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

#pragma warning(disable:4996)

using namespace std;

char **tree;
int n;

void pre(int cur) {
	cout << tree[0][cur];
	for (int i = 0; i < n; i++) {
		if (tree[1][cur] == tree[0][i]) {
			pre(i);
		}
	}
	for (int i = 0; i < n; i++) {
		if (tree[2][cur] == tree[0][i]) {
			pre(i);
		}
	}
}

void in(int cur) {
	for (int i = 0; i < n; i++) {
		if (tree[1][cur] == tree[0][i]) {
			in(i);
		}
	}
	cout << tree[0][cur];
	for (int i = 0; i < n; i++) {
		if (tree[2][cur] == tree[0][i]) {
			in(i);
		}
	}
}

void post(int cur) {
	for (int i = 0; i < n; i++) {
		if (tree[1][cur] == tree[0][i]) {
			post(i);
		}
	}
	for (int i = 0; i < n; i++) {
		if (tree[2][cur] == tree[0][i]) {
			post(i);
		}
	}
	cout << tree[0][cur];
}
int main() {
	tree = new char*[3];
	for (int i = 0; i < 3; i++) {
		tree[i] = new char[28];
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tree[0][i] >> tree[1][i] >> tree[2][i];
	}
	pre(0);
	cout << endl;
	in(0);
	cout << endl;
	post(0);
	cout << endl;
	return 0;
}