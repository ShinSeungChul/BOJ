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
	int n, num, size;
	int arr[40001] = { 0 };
	cin >> n;
	cin >> num;
	arr[1] = num;
	size = 1;
	for (int i = 1; i < n; i++) {
		scanf("%d", &num);
		if (arr[size] < num) {
			size++;
			arr[size] = num;
		}
		else {
			for (int j = 1; j <= size; j++) {
				if (arr[j] > num) {
					arr[j] = num;
					break;
				}
			}
		}
	}
	cout << size << endl;
}