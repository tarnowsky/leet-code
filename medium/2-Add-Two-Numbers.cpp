//
// Created by Michal Tarnowski on 08/02/2025.
//

#include <linked_list.h>

ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2) {
    auto* dummy = new ListNode();

    ListNode* curr = dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }

    return dummy->next;
}