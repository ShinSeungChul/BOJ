#include<iostream>
#include<string>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int main() {
	string s1, s2, answer = "";
	getline(cin, s1, ' ');
	getline(cin, s2);
	int size1, size2;
	char temp;
	bool plus = false;
	size1 = s1.size();
	size2 = s2.size();
	while ((size1 > 0) || (size2 > 0)) {
		size1--;
		size2--;
		if (plus)
			temp = 1;
		else
			temp = 0;
		plus = false;
		if ((size1 >= 0) && (size2 >= 0)) {
			temp += s1[size1] + s2[size2] - '0';
		}
		else if (size1 < 0) {
			temp += s2[size2];
		}
		else if (size2 < 0) {
			temp += s1[size1];
		}
		if (temp > '9') {
			temp -= 10;
			plus = true;
		}
		answer = temp + answer;
	}
	if (plus)
		answer = '1' + answer;
	cout << answer << endl;
}