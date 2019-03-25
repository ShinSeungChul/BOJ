#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int zero, one, num;
	for (int i = 0; i < 3; i++) {
		one = 0; zero = 0;
		for (int j = 0; j < 4; j++) {
			cin >> num;
			if (num)
				one++;
			else
				zero++;
		}
		if (zero == 1)
			cout << 'A' << endl;
		else if (zero == 2)
			cout << 'B' << endl;
		else if (zero == 3)
			cout << 'C' << endl;
		else if (zero == 4)
			cout << 'D' << endl;
		else
			cout << 'E' << endl;
	}
}