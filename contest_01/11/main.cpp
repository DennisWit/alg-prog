#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (abs(a - b) < abs(a - c)) {
		cout << "B " << abs(a - b) << endl;
	}
	else {
		cout << "C " << abs(a - c) << endl;
	}
	return 0;
}
