#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int main() {
	double i, m, h;
	cin >> m;
	cin >> h;
	i = m / pow(h, 2);
	cout.precision(17);
	cout << i;

	return 0;
}
