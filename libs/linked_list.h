//
// Created by Michal Tarnowski on 08/02/2025.
//

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <initializer_list>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(const int x) : val(x), next(nullptr) {}
    ListNode(const int x, ListNode *next) : val(x), next(next) {}

    ListNode(const std::initializer_list<int> nums) : val(0), next(nullptr) {
        auto* current = this;
        bool first = true;

        for (const auto& num : nums) {
            if (first) {
                current->val = num;
                first = false;
            } else {
                current->next = new ListNode(num);
                current = current->next;
            }
        }

    }

    void print_list() const {
        const auto* curr = this;
        while (curr) {
            std::cout << curr->val << " -> ";
            curr = curr->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2);

#endif //LINKED_LIST_H
