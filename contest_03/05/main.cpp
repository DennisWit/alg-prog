#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> counts;
	int n;
	std::cin >> n;
	std::string s;
	int maxCount = 0;
	for (int i = 0; i < n; i++) {

		std::cin >> s;
		counts[s]++;
		if (counts[s] > maxCount)
			maxCount = counts[s];

	}
	for (auto& entry : counts) {
		if (entry.second == maxCount)
			std::cout << entry.first << " ";
	}
	return 0;
}