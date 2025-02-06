//
// Created by Michal Tarnowski on 06/02/2025.
//

#include <tree.h>

int main() {
    TreeNode *p = TreeNode::populate_tree(
        {1,2,2,std::nullopt,3,std::nullopt,3}
    );

    TreeNode::print_tree(p);

    // std::cout << (isSymmetric(p) ? "true" : "false");

    return 0;
}
