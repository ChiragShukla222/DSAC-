#include <iostream>
#include <stack>
#include <string>

std::string stackToString(std::stack<char> s) {
    std::string result;
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    return result;
}

int main() {
    std::stack<char> charStack;
    std::string input = "Hello, World!";

    // Push all characters of the string onto the stack
    for (char c : input) {
        charStack.push(c);
    }

    // Convert stack to string
    std::string output = stackToString(charStack);

    std::cout << "Original string: " << input << std::endl;
    std::cout << "Converted string: " << output << std::endl;

    return 0;
}

