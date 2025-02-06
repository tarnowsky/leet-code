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

    static TreeNode* populate_tree(const std::vector<std::optional<int>>& values) {
        if (values.empty() || !values[0].has_value()) return nullptr;

        auto* root = new TreeNode(values[0].value());
        std::queue<TreeNode*> q;
        q.push(root);

        size_t i = 1;
        while (i < values.size()) {
            TreeNode* current = q.front();
            q.pop();

            if (i < values.size()) {
                if (values[i].has_value()) {
                    current->left = new TreeNode(values[i].value());
                    q.push(current->left);
                }
                ++i;
            }

            if (i < values.size()) {
                if (values[i].has_value()) {
                    current->right = new TreeNode(values[i].value());
                    q.push(current->right);
                }
                ++i;
            }
        }
        return root;
    }


    static void print_tree(TreeNode* root) {
        if (!root) {
            std::cout << "Empty Tree\n";
            return;
        }

        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            const TreeNode* node = q.front();
            q.pop();
            if (node) {
                std::cout << node->val << " ";
                q.push(node->left);
                q.push(node->right);
            } else {
                std::cout << "null ";
            }
        }
        std::cout << std::endl;
    }

};

std::vector<int> inorder_tree_traversal(TreeNode* root);
bool isSameTree(TreeNode* p, TreeNode* q);
bool isSymmetric(TreeNode* root);


#endif //TREE_H
