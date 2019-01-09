#include "../dataType/TreeNode.h"
#include <iostream>

using namespace std;


class Solution {
public:
    bool res = true;

    bool isBalanced(TreeNode *root) {
        traversal(root);
        return res;
    }

    int traversal(TreeNode *root) {
        if (root == NULL)
            return 0;
        else {
            int leftDepth = traversal(root->left);
            int rightDepth = traversal(root->right);
            if (abs(leftDepth - rightDepth) > 1)
                res = false;
            return max(leftDepth, rightDepth) + 1;
        }
    }
};

/*
 *                 1
 *             2       2
 *         3    3   3     3
 *       4  4 4  4 4  4
 *      5 5
 */

int main() {
    auto *root = new TreeNode(1);
    // root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    // root->left->left = new TreeNode(3);
    // root->left->right = new TreeNode(3);
    // root->left->left->left = new TreeNode(4);
    // root->left->left->right = new TreeNode(4);
    bool res = Solution().isBalanced(root);
    cout << res << endl;
}