#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	sort(phone_book.begin(), phone_book.end());
	vector<string>::iterator iter;
	int size = phone_book.size();
	for (int i = 0; i<size - 1; i++) {
		if (phone_book[i + 1].find(phone_book[i]) != -1) {
			answer = false;
			break;
		}
	}
	return answer;
}

int main() {
	vector<string> phone_book;
	int t;
	cin >> t;
	int n;
	string s;
	while (t--) {
		cin >> n;
		for (int i = 0; i<n; i++) {
			cin >> s;
			phone_book.push_back(s);
		}
		if (solution(phone_book)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		phone_book.clear();
	}
}