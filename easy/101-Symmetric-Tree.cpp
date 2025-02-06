//
// Created by Michal Tarnowski on 06/02/2025.
//

#include "101-Symmetric-Tree.h"

bool isSymmetric(TreeNode* root) {
    if (!root) return true;

    std::queue<std::pair<TreeNode*, TreeNode*>> q;
    q.emplace(root->left, root->right);

    while (!q.empty()) {
        auto [node1, node2] = q.front();
        q.pop();

        if (!(node1 || node2)) continue;
        if (!(node1 && node2)) return false;

        if (node1->val != node2->val) return false;

        q.emplace(node1->left, node2->right);
        q.emplace(node1->right, node2->left);

    }
    return true;
}