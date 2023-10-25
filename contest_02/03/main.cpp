bool compare(const std::string& number1, const std::string& number2) {
	int First = std::count(number1.begin(), number1.end(), '1');
	int Second = std::count(number2.begin(), number2.end(), '1');


	if (First == Second)
		return stoi(number1) < stoi(number2);
	else 
		return First > Second;
}