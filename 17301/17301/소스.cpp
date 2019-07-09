#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>

#pragma warning(disable:4996)

using namespace std;

#define MOD 1000000007

int main() {
	int n;
	cin >> n;
	long long ans = 1;
	long long temp = 1;
	long long strn = 0, strc = 0, strcn = 0;
	char s[11];
	bool haven = false, havec = false;
	for (int i = 0; i < n; i++) {
		temp = ((temp%MOD)* (n - i)) % MOD;
		ans = ((ans%MOD) + (temp%MOD)) % MOD;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			s[j] = ' ';
		}
		scanf("%s", s);
		haven = false, havec = false;
		for (int j = 0; j < 10; j++) {
			if (s[j] == 'N') {
				haven = true;
			}
			else if (s[j] == 'C') {
				havec = true;
				if (haven) {
					break;
				}
			}
			if (j == 9) {
				if ((haven) && (havec))
					strcn++;
				else if (haven)
					strn++;
				else
					strc++;
			}
		}
	}
	long long temp1 = 0, temp2 = 0;
	temp = 1;
	for (int i = 0; i < strn; i++) {
		temp = ((temp%MOD)* (strn - i)) % MOD;
		temp1 = ((temp1%MOD) + temp) % MOD;
	}
	temp = 1;
	for (int i = 0; i < strc; i++) {
		temp = ((temp%MOD)* (strc - i)) % MOD;
		temp2 = ((temp2%MOD) + temp) % MOD;
	}
	ans = ans - ((((temp1 + 1)*(temp2 + 1)) % MOD*(strcn + 1)) % MOD);
	if (ans < 0)
		ans += MOD;
	cout << ans << endl;
}