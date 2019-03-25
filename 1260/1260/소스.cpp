#include<iostream>
#include<cstdio>
#include<string.h>
#include<vector>

#pragma warning(disable:4996)

using namespace std;

int **node;

class queue {
private:
	vector<int> q;
	vector<int>::iterator iter;
public:
	void push(int n) {
		q.push_back(n);
	}

	int pop() {
		int returnNum;
		iter = q.begin();
		returnNum = q.at(0);
		q.erase(iter);
		return returnNum;
	}

	int pop_back() {
		int size = q.size();
		int returnNum;
		for (iter = q.begin(); iter < q.end(); iter++);
		returnNum = q.at(q.size() - 1);
		q.erase(iter);
		return returnNum;
	}

	int front() {
		return q.at(0);
	}
};

void dfs(int *done, int n, int  v) {
	int k = v;
	cout << k + 1 << " ";
	for (int j = 0; j < n; j++) {
		if ((node[k][j]) && done[j]) {
			done[j] = 0;
			dfs(done, n, j);
		}
	}
}

int main() {
	queue q;
	int n, m, v, x, y, k;
	int *done;
	cin >> n >> m >> v;
	node = new int*[n];
	done = new int[n];
	for (int i = 0; i < n; i++) {
		node[i] = new int[n];
		done[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			node[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		node[x - 1][y - 1] = 1;
		node[y - 1][x - 1] = 1;
	}
	done[v - 1] = 0;
	dfs(done, n, v - 1);
	cout << endl;
	for (int i = 0; i < n; i++) {
		done[i] = 1;
	}
	q.push(v - 1);
	done[v - 1] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((node[q.front()][j]) && done[j]) {
				done[j] = 0;
				q.push(j);
			}
		}
		cout << q.pop() + 1 << " ";
	}
	cout << endl;
	return 0;
}