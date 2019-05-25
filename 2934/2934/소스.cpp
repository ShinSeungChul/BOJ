#include<iostream>
#include<cstdio>

#pragma warning(disable:4996)

using namespace std;

int tree[100001] = { 0 };
int n;

int get_sum(int index) {
	int ans = 0;
	while (index > 0) {
		ans += tree[index];
		index -= (index&-index);
	}
	return ans;
}

void update(int index, int num) {
	while (index <= 100001) {
		tree[index] += num;
		index += (index&-index);
	}
}

int main() {
	cin >> n;
	int start, end;
	int start_cnt, end_cnt;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &start, &end);
		start_cnt = get_sum(start);
		end_cnt = get_sum(end);
		printf("%d\n", start_cnt + end_cnt);
		update(start, -start_cnt);
		update(start + 1, start_cnt);
		update(start + 1, 1);
		update(end, -end_cnt);
		update(end + 1, end_cnt);
		update(end, -1);
	}
}