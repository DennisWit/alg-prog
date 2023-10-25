#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool Skobka(string input) {
    stack<char> stack;
    for (char i : input) {
        if (i == '(' or i == '{' or i == '[') {
            stack.push(i);
        }
        else if (i == ')' or i == '}' or i == ']') {
            if (stack.empty()) {
                return false;
            }
            char temp = stack.top();
            stack.pop();
            if ((i == ')' and temp != '(') or (i == '}' and temp != '{') or (i == ']' and temp != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}

int main() {
    string info;
    getline(cin, info, '!');

    if (Skobka(info)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}