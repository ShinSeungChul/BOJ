#include <iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main() {
	long long n, sum = 0, tempNum;
	bool isNum = false;
	char *word;
	cin >> n;
	word = new char[n];
	cin >> word;

	for (int i = 0; i < n; i++) {
		if ((47 < word[i]) && (word[i] < 58)) {
			if (!isNum) {
				sum += word[i] - 48;
				tempNum = word[i] - 48;
				isNum = true;
			}
			else {
				sum -= tempNum;
				tempNum *= 10;
				tempNum += word[i] - 48;
				sum += tempNum;
			}
		}
		else {
			isNum = false;
		}
	}
	cout << sum << endl;

	return 0;
}