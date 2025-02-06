//
// Created by Michal Tarnowski on 06/02/2025.
//

#include "100-Same-Tree.h"

int main() {
    TreeNode *p = nullptr, *q = nullptr;

    p = TreeNode::populate_tree(p, {1, 2, 3, 4, 5, 6, 7, 8});
    q = TreeNode::populate_tree(q, {1, 2, 3, 4, 5, 6, 7, 8});

    std::cout << (isSameTree(p, q) ? "true" : "false");

    return 0;
}
