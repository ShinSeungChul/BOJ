#include<iostream>
#include<cstdio>
#include<vector>

#pragma warning(disable:4996)

using namespace std;


int main() {
	long long n;
	int num = 0, sumnum = 1;
	long long temp = 10, sum = 0;
	cin >> n;
	while (n--) {
		num++;
		if (num == temp) {
			temp *= 10;
			sumnum++;
		}
		sum += sumnum;
	}
	cout << sum << endl;
}