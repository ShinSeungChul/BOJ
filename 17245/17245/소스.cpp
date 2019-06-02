#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<utility>
#include<string>
#include<map>
#pragma warning(disable:4996)

using namespace std;

int main() {
	long long n, computer = 0, num;
	map<long long, long long> m;
	long long cnt = 0, safe = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%lld", &num);
			m[num]++;
			computer += num;
			if (num)
				cnt++;
		}
	}
	map<long long, long long>::iterator iter;
	if (computer % 2)
		computer = computer / 2 + 1;
	else
		computer /= 2;
	long long time = 0;
	long long cur = 0;
	m[0] = 0;
	for (iter = m.begin(); iter != m.end(); iter++) {
		time += ((*iter).first - cur);
		safe += (((*iter).first - cur)*cnt);
		if (safe > computer) {
			time -= ((safe - computer) / cnt);
			break;
		}
		cnt -= (*iter).second;
		cur = (*iter).first;
	}
	cout << time << endl;
}