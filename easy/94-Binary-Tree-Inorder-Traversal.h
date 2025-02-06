//
// Created by Michal Tarnowski on 06/02/2025.
//

#ifndef INC_94_BINARY_TREE_INORDER_TRAVERSAL_H
#define INC_94_BINARY_TREE_INORDER_TRAVERSAL_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    explicit TreeNode(const int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(const int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif //INC_94_BINARY_TREE_INORDER_TRAVERSAL_H
