#include<iostream>
#include<cstdio>
#include<string.h>

#pragma warning(disable: 4996)

using namespace std;

class Node {
private:
	Node *next;
	int num;
public:
	Node(Node *next, int num) {
		this->next = next;
		this->num = num;
	}
	friend class Queue;
};

class Queue {
private:
	Node *first = NULL;
	Node *last = NULL;
	Node *temp;
	int len = 0;
public:
	void push(int n) {
		len++;
		Node *newNode = new Node(NULL, n);
		if (first == NULL) {
			first = newNode;
			last = newNode;
		}
		else {
			last->next = newNode;
			last = newNode;
		}
	}

	void pop() {
		if (len)
			len--;
		if (first == NULL)
			cout << -1 << endl;
		else if (first == last) {
			cout << first->num << endl;
			first = NULL;
			last = NULL;
		}
		else {
			cout << first->num << endl;
			first = first->next;
		}
	}

	void size() {
		cout << len << endl;
	}

	void empty() {
		if (first == NULL)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}

	void front() {
		if (first == NULL)
			cout << -1 << endl;
		else
			cout << first->num << endl;
	}

	void back() {
		if (first == NULL)
			cout << -1 << endl;
		else
			cout << last->num << endl;
	}
};

int main() {
	Queue q;
	int n;
	int pushNum;
	char choice[6];
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%s", choice);
		if (!strcmp(choice, "push")) {
			scanf("%d", &pushNum);
			q.push(pushNum);
		}
		else if (!strcmp(choice, "pop")) {
			q.pop();
		}
		else if (!strcmp(choice, "size")) {
			q.size();
		}
		else if (!strcmp(choice, "empty")) {
			q.empty();
		}
		else if (!strcmp(choice, "front")) {
			q.front();
		}
		else if (!strcmp(choice, "back")) {
			q.back();
		}
	}

	return 0;
}