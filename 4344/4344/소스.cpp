#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int num, temp;
	double ave, count;
	int **grade;
	int *size;
	cin >> num;
	grade = new int*[num];
	size = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> temp;
		size[i] = temp;
		grade[i] = new int[temp];
		for (int j = 0; j < temp; j++) {
			cin >> grade[i][j];
		}
	}

	for (int i = 0; i < num; i++) {
		ave = 0;
		count = 0;
		for (int j = 0; j < size[i]; j++) {
			ave += grade[i][j];
		}
		ave /= size[i];
		for (int j = 0; j < size[i]; j++) {
			if (grade[i][j] > ave)
				count++;
		}
		printf("%.3f%%\n", count / size[i] * 100);
	}

	return 0;
}