#include<iostream>
#include<stack>
#include<cstdio>

using namespace std;

int main()
{
	int n, m;
	int temp1 = 1, temp2 = 1, temp3 = 1;
	cin >> n >> m;
	int arr[1300] = { 0 };
	for (int j = 1; j<50; j++) {
		int a, b;
		a = j*(j - 1) / 2;
		b = j*(j + 1) / 2;
		for (int i = a + 1; i <= b; i++) {
			arr[i] = arr[i - 1] + j;
		}
	}
	cout << arr[m] - arr[n - 1] << endl;
}
