#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", N, i, N*i);
	}
}