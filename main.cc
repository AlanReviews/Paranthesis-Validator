#include <iostream>
#include <string>
#include "stack.h"

int main() {
    stack validation_stack;
//    std::string testString = "(((()))()(()))";
    std::string testString = "((()";

    for (unsigned int i = 0; i < testString.length(); i++) {
        if (testString[i] == '(') {
            const int num = testString[i];
            validation_stack.push(num);
        }
        else if (testString[i] == ')') {
            if (validation_stack.empty()) {
                std::cout << "The string is invalid" << std::endl;
                return -1;
            }
            validation_stack.pop();
        }
    }
    if (validation_stack.empty()) {
        std::cout << "The string is valid" << std::endl;
        return 0;
    }
    else {
        std::cout << "The string is invalid" << std::endl;
        return -1;
    }
    return 0;
}
