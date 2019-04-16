#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n;
	int temp = 1;
	cin >> n;
	char arr[10000][10000] = { 0 };
	arr[0][0] = '*';
	while (n /= 3) {
		for (int i = 0; i<3; i++) {
			for (int j = 0; j<3; j++) {
				for (int a = 0; a<temp; a++) {
					for (int b = 0; b<temp; b++) {
						if ((((a + i*temp) >= temp) && ((a + i*temp)<2 * temp)) && (((b + j*temp) >= temp) && ((b + j*temp)<2 * temp))) {
							arr[a + i*temp][b + j*temp] = ' ';
						}
						else {
							arr[a + i*temp][b + j*temp] = arr[a][b];
						}
					}
				}
			}
		}
		temp *= 3;
	}
	for (int i = 0; i<temp; i++) {
		for (int j = 0; j<temp; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}