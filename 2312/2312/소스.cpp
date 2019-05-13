#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<set>
#include<utility>
#include<algorithm>
#include<map>

#pragma warning(disable:4996)

using namespace std;

int main() {
	bool prime_num[100001] = { true, true };
	map<int, int> m;
	for (int i = 2; i < 100001; i++) {
		if (!prime_num[i]) {
			for (int j = i * 2; j < 100001; j += i) {
				prime_num[j] = true;
			}
		}
	}
	int n;
	int num;
	map<int, int>::iterator iter;
	cin >> n;
	while (n--) {
		scanf("%d", &num);
		while (num != 1) {
			for (int i = 2; i < 100001; i++) {
				if (!prime_num[i]) {
					if (num%i == 0) {
						m[i]++;
						num /= i;
						break;
					}
				}
			}
		}
		for (iter = m.begin(); iter != m.end(); iter++) {
			printf("%d %d\n", (*iter).first, (*iter).second);
		}
		m.clear();
	}
}