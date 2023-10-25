#include <iostream>

using namespace std;
int main() {
	double a, b, s = 0;
	cin >> a;
	cin >> b;

	cout.precision(16);
	s = a / b;
	cout << s;
	return 0;
}
