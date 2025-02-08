//
// Created by Michal Tarnowski on 06/02/2025.
//

#include <linked_list.h>

int main() {
    const auto* num1 = new ListNode{2,4,3};
    const auto* num2 = new ListNode{5,6,4};

    const auto* result = addTwoNumbers(num1, num2);

    result->print_list();
    return 0;
}
