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

int gcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}

int lcm(int a, int b) {
	return a*b / gcd(a, b);
}

int main() {
	int t;
	int a, b;
	int l;
	int i;
	cin >> t;
	while (t--) {
		scanf("%d", &a);
		scanf("%d", &b);
		i = b / a;
		while (1) {
			if (i == b) {
				printf("%d\n", i);
				break;
			}
			else if (b < a*i++) {
				i--;
				l = lcm(b, i);
				a = l / b*a - l / i;
				b = l;
				l = gcd(a, b);
				while (l != 1) {
					a /= l;
					b /= l;
					l = gcd(a, b);
				}
				i = b / a;
			}
		}
	}
}
