#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int main() {
	vector<int> queue;
	vector<int>::iterator iter;
	int n, m, num, importance, seq, size;
	int testCase;
	cin >> testCase;
	while (testCase--) {
		cin >> n >> m;
		seq = 1;
		for (int i = 0; i < n; i++) {
			cin >> num;
			queue.push_back(num);
		}
		size = queue.size();
		while (size) {
			importance = queue[0];
			if (size == 1) {
				queue.erase(queue.begin());
				cout << seq << endl;
				break;
			}
			for (int i = 1; i < size; i++) {
				if (importance < queue[i]) {
					for (int j = 0; j < i; j++) {
						queue.push_back(queue.at(0));
						queue.erase(queue.begin());
						if (m == 0) {
							m = queue.size() - 1;
						}
						else {
							m--;
						}
					}
					break;
				}
				if (i == size - 1) {
					if (m == 0) {
						for (int j = 0; j < size; j++)
							queue.erase(queue.begin());
						cout << seq << endl;
						break;
					}
					else {
						queue.erase(queue.begin());
						seq++;
						m--;
					}
				}
			}
			size = queue.size();
		}
	}
	return 0;
}