//
// Created by Michal Tarnowski on 06/02/2025.
//
#include <iostream>
#include "94-Binary-Tree-Inorder-Traversal.h"
#include <initializer_list>

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

TreeNode* insert_node(TreeNode* root, const int val) {
    if (!root) return new TreeNode(val);

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        if (current->left) {
            q.push(current->left);
        } else {
            current->left = new TreeNode(val);
            return root;
        }

        if (current->right) {
            q.push(current->right);
        } else {
            current->right = new TreeNode(val);
            return root;
        }
    }
    return root;

}

TreeNode* populate_tree(TreeNode* root, const std::initializer_list<int> values) {
    for (auto& val : values) {
        root = insert_node(root, val);
    }
    return root;
}

void printTree(TreeNode* root) {
    for (const auto& val : inorder_tree_traversal(root)) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    TreeNode* root = nullptr;
    root = populate_tree(root, {1, 2, 3, 4, 5, 6, 7, 8});
    printTree(root);

    return 0;
}


