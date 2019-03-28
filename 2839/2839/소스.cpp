#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int N;
	int num = 0;
	cin >> N;
	if (N == 4)
		cout << "-1";
	else if (N == 7)
		cout << "-1";
	else {
		while (N) {
			N -= 5;
			num++;
			if (N < 0) {
				break;
			}
		}
		while (N) {
			N += 5;
			num--;
			while (N) {
				N -= 3;
				num++;
				if (N < 0) {
					N += 3;
					num--;
					break;
				}
			}
		}
		cout << num;
	}
}	