//
// Created by Michal Tarnowski on 06/02/2025.
//


#ifndef TREE_H
#define TREE_H

#include <initializer_list>
#include <queue>
#include <iostream>

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    explicit TreeNode(const int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(const int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

    static TreeNode* populate_tree(TreeNode* root, const std::initializer_list<int> values) {
        for (auto& val : values) {
            root = insert_node(root, val);
        }
        return root;
    }

    static TreeNode* insert_node(TreeNode* root, const int val) {
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

    static void print_left_to_right(const TreeNode* root) {
        if (!root) return;

        std::queue<const TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            const TreeNode* node = q.front();
            q.pop();

            std::cout << node->val << " ";

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

    }
};

#endif //TREE_H
