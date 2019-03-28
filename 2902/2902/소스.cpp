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

int main() {
	char a;
	char temp;
	char arr[100];
	int b = 0;

	while (1) {
		a = getchar();
		if ((0 >= 'A' - a) && (0 <= 'Z' - a)) {
			arr[b++] = a;
		}
		if (a == '\n')
			break;
	}
	for (int i = 0; i < b; i++) {
		cout << arr[i];
	}
	cout << endl;
}