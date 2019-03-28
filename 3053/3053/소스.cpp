#include<iostream>
#include<vector>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>

#pragma warning(disable:4996)

#define M_PI 3.14159265358979323846

using namespace std;

int main() {
	double r;
	cin >> r;
	printf("%.6f\n", r*r*M_PI);
	printf("%.6f\n", r*r * 2);
}