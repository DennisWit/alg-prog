#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers{};
    int n;
    long int k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        numbers.push_back(k);
    }
    list<int> numbers2{};
    int n2;
    long int k2;
    cin >> n2;
    for (int i2 = 0; i2 < n2; i2++) {
        cin >> k2;
        numbers2.push_back(k2);
    }
    numbers.insert(numbers.end(), numbers2.begin(), numbers2.end());
    numbers.sort();
    for (const auto x : numbers)
        std::cout << x << " ";
	return 0;
}