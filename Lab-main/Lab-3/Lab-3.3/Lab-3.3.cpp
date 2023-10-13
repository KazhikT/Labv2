#include "FixedCapacityStack.h.h"
#include <iostream>
#include <string>

bool is_valid_brackets(const std::string& s) {
    FixedCapacityStack<char> stack(s.length());

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (stack.empty()) {
                return false; // Нет соответствующей открывающей скобки
            }
            char top = stack.top();
            stack.pop();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false; // Скобки не совпадают
            }
        }
    }

    return stack.empty(); // Если стек пуст, то все скобки совпадают
}

int main() {
    setlocale(LC_ALL, "Rus");
    std::string s;
    std::cout << "Введите скобочную последовательность: ";
    std::cin >> s;

    if (is_valid_brackets(s)) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
