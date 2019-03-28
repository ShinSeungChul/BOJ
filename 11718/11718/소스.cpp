#include<iostream>
#include<string>

using namespace std;

int main() {
	string a;
	for (int i = 0; i < 100; i++) {
		getline(cin, a);
		if (a == "" || a.empty() || a == "\n")
			break;
		cout << a << endl;
	}
}