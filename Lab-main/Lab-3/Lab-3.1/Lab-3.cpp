#include <iostream>
#include "FixedCapacityStack.h.h"
int main() {
    FixedCapacityStack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top of the stack: " << stack.top() << std::endl;

    while (!stack.empty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    return 0;
}
