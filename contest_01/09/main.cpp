#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double a, b, c;
	cin >> a;
	cin >> b;
	c = pow((pow(a, 2) + pow(b, 2)), 0.5);
	cout.precision(17);
	cout << c;

	return 0;
}
