//
// Created by Michal Tarnowski on 06/02/2025.
//

#include "100-Same-Tree.h"

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;
    if (!p || !q) return false;

    std::queue<std::pair<TreeNode*, TreeNode*>> queue;
    queue.emplace(p, q);

    while (!queue.empty()) {
        auto [node1, node2] = queue.front();
        queue.pop();

        if (node1->val != node2->val) return false;

        if (node1->left && node2->left) {
            queue.emplace(node1->left, node2->left);
        } else {
            if ((!node1->left || !node2->left) && !(!node1->left && !node2->left)) return false;
        }

        if (node1->right && node2->right) {
            queue.emplace(node1->right, node2->right);
        } else {
            if ((!node1->right || !node2->right) && !(!node1->right && !node2->right)) return false;
        }
    }

    return true;
}
