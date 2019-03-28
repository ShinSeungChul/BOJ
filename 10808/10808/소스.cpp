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
	int cnt[27] = { 0 };
	char c;
	while (1) {
		c = getchar();
		if (c == '\n')
			break;
		cnt[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
	cout << endl;
}