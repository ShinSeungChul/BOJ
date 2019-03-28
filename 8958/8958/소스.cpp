#include<iostream>
#include<string>

using namespace std;

int main() {
	int testCase;
	int score;
	int temp = 1;
	char ox[81] = { 0 };
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> ox;
		score = 0;
		temp = 1;
		for (int j = 0; j < 81; j++) {
			if (ox[j] == 'O') {
				score += temp++;
			}
			else if (ox[j] == 'X') {
				temp = 1;
			}
			else if (ox[j] == 0)
				break;
			ox[j] = 0;
		}
		cout << score << endl;
	}
	return 0;
}