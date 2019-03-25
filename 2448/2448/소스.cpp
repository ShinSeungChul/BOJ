#include<iostream>
#include<string>

using namespace std;
void display();

char **tree;
int n, k = 1, temp;
char first[3][5] = { { ' ', ' ', '*', ' ', ' ' },{ ' ', '*', ' ', '*', ' ' },{ '*', '*', '*', '*', '*' } };

void print(int n, int m) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			tree[n + i][m + j] = first[i][j];
		}
	}
}

void printTree() {
	temp = 1;
	for (int i = 0; i < k - 1; i++) {
		temp *= 2;
	}
	for (int i = 0; i < 3 * temp; i++) {
		for (int j = 0; j < 3 * temp * 2 - 1; j++) {
			tree[3 * temp + i][n - (6 * temp) + j] = tree[3 * temp + i][n + (6 * temp) - 2 - j] = tree[i][n - (3 * temp) + j];
		}
	}
	k++;
}

void display() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 2; j++) {
			cout << tree[i][j];
		}
		cout << endl;
	}

}

int main() {
	int temp;
	cin >> n;
	temp = n / 6;
	tree = new char*[n];
	for (int i = 0; i < n; i++) {
		tree[i] = new char[n * 2];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 2; j++) {
			tree[i][j] = ' ';
		}
	}
	print(0, n - 3);
	for (int i = 0; i < temp; temp /= 2) {
		printTree();
	}
	display();
	return 0;
}