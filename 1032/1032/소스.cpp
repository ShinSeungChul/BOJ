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
	char temp[52];
	int n;
	cin >> n;
	scanf("%s", &temp);
	n--;
	int k = 0;
	char c;
	getchar();
	while (n--) {
		while (1) {
			c = getchar();
			if (c == '\n') {

				k = 0;
				break;
			}
			if (temp[k] != c)
				temp[k] = '?';
			k++;
		}
	}
	printf("%s\n", temp);
}