#include <iostream>
#include<math.h>

using namespace std;

int main() {
	int n;
	double x1, x2, y1, y2, r1, r2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if ((x1 == x2) && (y1 == y2) && (r1 == r2)) {
			cout << -1 << endl;
		}
		else if ((x1 == x2) && (y1 == y2) && (r1 != r2)) {
			cout << 0 << endl;
		}
		else if (r2 >(r1 + sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))))) {
			cout << 0 << endl;
		}
		else if (r1 > (r2 + sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))))) {
			cout << 0 << endl;
		}
		else if (r2 == (r1 + sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))))) {
			cout << 1 << endl;
		}
		else if (r1 == (r2 + sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))))) {
			cout << 1 << endl;
		}
		else if ((r1 + r2) > sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)))) {
			cout << 2 << endl;
		}
		else if ((r1 + r2) == sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)))) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}