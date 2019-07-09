#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int l;
	bool arr[3][3] = { false };
	int num;
	int a, b;
	int befa, befb;
	bool fin = true;
	cin >> l;
	cin >> num;
	num--;
	befa = a = num / 3;
	befb = b = num % 3;
	arr[a][b] = true;
	for (int i = 1; i < l; i++) {
		scanf("%d", &num);
		num--;
		a = num / 3;
		b = num % 3;
		if (arr[a][b])
			fin = false;
		else
			arr[a][b] = true;
		if (((befa - a) % 2 == 0) && ((befb - b) % 2 == 0)) {
			if (befa == a) {
				if (arr[a][abs(befb - b) / 2] == false) {
					fin = false;
				}
			}
			else if (befb == b) {
				if (arr[abs(befa - a) / 2][b] == false) {
					fin = false;
				}
			}
			else {
				if (arr[1][1] == false) {
					fin = false;
				}
			}
		}
		befa = a;
		befb = b;
	}
	if (fin)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}