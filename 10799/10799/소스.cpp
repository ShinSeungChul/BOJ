#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>
#include<stack>

#pragma warning(disable:4996)

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int pipe = 0;
	int solution = 0;
	char temp;
	char cur;
	while (1) {
		cur = getchar();
		if (cur == '\n')
			break;
		if (cur == '(') {
			pipe++;
		}
		else {
			pipe--;
			if (temp == '(') {
				solution += pipe;
			}
			else
				solution++;
		}
		temp = cur;
	}
	cout << solution << endl;
}