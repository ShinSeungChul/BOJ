#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	int cnt = 0;
	int temp_cnt;
	cin >> n;
	int temp = 666;
	int temp2;
	bool g;
	while (1) {
		temp2 = temp;
		temp_cnt = 0;
		g = false;
		while (temp2) {
			if (temp2 % 10 == 6)
				temp_cnt++;
			else
				temp_cnt = 0;
			if (temp_cnt == 3) {
				g = true;
				break;
			}
			temp2 /= 10;
		}
		if (g)
			cnt++;
		if (cnt == n) {
			cout << temp << endl;
			break;
		}
		temp++;
	}
}