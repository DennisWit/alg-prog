#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
	long long int num1, num2;
	cin >> num1;
	cin >> num2;
	string s1 = to_string(num1);
	string s2 = to_string(num2);               
	if ((count(s1.begin(), s1.end(), '0') == count(s2.begin(), s2.end(), '0')) and (count(s1.begin(), s1.end(), '1') == count(s2.begin(), s2.end(), '1')) and (count(s1.begin(), s1.end(), '2') == count(s2.begin(), s2.end(), '2')) and (count(s1.begin(), s1.end(), '3') == count(s2.begin(), s2.end(), '3')) and (count(s1.begin(), s1.end(), '4') == count(s2.begin(), s2.end(), '4')) and (count(s1.begin(), s1.end(), '5') == count(s2.begin(), s2.end(), '5')) and (count(s1.begin(), s1.end(), '6') == count(s2.begin(), s2.end(), '6')) and (count(s1.begin(), s1.end(), '7') == count(s2.begin(), s2.end(), '7')) and (count(s1.begin(), s1.end(), '8') == count(s2.begin(), s2.end(), '8')) and (count(s1.begin(), s1.end(), '9') == count(s2.begin(), s2.end(), '9'))) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

