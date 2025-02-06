//
// Created by Michal Tarnowski on 06/02/2025.
//
#include <tree.h>

std::vector<int> inorder_tree_traversal(TreeNode* root) {
    std::vector<int> result;
    std::stack<TreeNode*> stack;

    TreeNode* current = root;

    while (current != nullptr || !stack.empty()) {
        while (current != nullptr) {
            stack.push(current);
            current = current->left;
        }
        current = stack.top();
        stack.pop();
        result.push_back(current->val);
        current = current->right;
    }
    return result;
}





