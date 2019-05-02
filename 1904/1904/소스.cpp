#include<iostream>
#include<cstdio>
#include<string>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int n;
	int m;
	int sum;
	int temp = 1;
	int mul = 1;
	int fix;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &fix);
		sum = 0;
		for (int j = temp; j < fix; j++) {
			sum++;
		}
		temp = fix + 1;
		if(sum)
			mul *= sum;
	}
	sum = 0;
	for (int j = temp; j < n + 1; j++) {
		sum++;
	}
	temp = fix + 1;
	if(sum)
		mul *= sum;
	cout << mul << endl;
}