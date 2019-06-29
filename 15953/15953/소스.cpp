#include<iostream>
#include<vector>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	int t;
	int arr1[7] = { 0, 1, 3, 6, 10, 15, 21 };
	int price1[7] = { 5000000, 3000000, 2000000, 500000, 300000, 100000 };
	int arr2[6] = { 0, 1, 3, 7, 15, 31 };
	int price2[6] = { 5120000, 2560000, 1280000, 640000, 320000 };
	cin >> t;
	int a, b;
	int price;
	vector<int> v;
	while (t--) {
		price = 0;
		scanf("%d %d", &a, &b);
		for (int i = 0; i < 6; i++) {
			if ((arr1[i] < a) && (a <= arr1[i + 1])) {
				price += price1[i];
				break;
			}
		}
		for (int i = 0; i < 5; i++) {
			if ((arr2[i] < b) && (b <= arr2[i + 1])) {
				price += price2[i];
				break;
			}
		}
		v.push_back(price);
	}
	int size = v.size();
	for (int i = 0; i < size; i++) {
		printf("%d\n", v[i]);
	}
}