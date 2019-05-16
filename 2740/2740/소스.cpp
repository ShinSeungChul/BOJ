#include<iostream>
#include<cstdio>

#pragma warning(disalbe:4996)

using namespace std;

int main()
{
	int n, m, k;
	int arr1[101][101] = { 0 };
	int arr2[101][101] = { 0 };
	int answer[101][101] = { 0 };
	cin >> n >> m;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	cin >> m >> k;
	for (int i = 0; i<m; i++) {
		for (int j = 0; j<k; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<k; j++) {
			for (int k = 0; k<m; k++) {
				answer[i][j] += (arr1[i][k] * arr2[k][j]);
			}
		}
	}
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<k; j++) {
			printf("%d ", answer[i][j]);
		}
		printf("\n");
	}
	return 0;
}
