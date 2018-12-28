#include <iostream>
#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (root == NULL)
            return true;
        return compare(root->left, root->right);
    }

    bool compare(TreeNode *left, TreeNode *right){
        if (left == NULL and right == NULL){
            return true;
        } else if ((left == NULL and right != NULL) or (left != NULL and right == NULL)) {
            return false;
        } else {
            if (left->val != right->val)
                return false;
            if (compare(left->left, right->right) and compare(left->right, right->left)){
                return true;
            } else {
                return false;
            }
        }
    }
};


int main() {
    TreeNode n0(1);
    TreeNode n1(2);
    TreeNode n2(2);
    TreeNode n3 = NULL;
    TreeNode n4(3);
    TreeNode n5 = NULL;
    TreeNode n6(3);

    /*
     *            1
     *        1       1
     *     1       1
     */

    n0.left = &n1;
    n0.right = &n2;
    n1.left = &n3;
    n1.right = &n4;
    n2.left = &n5;
    n2.right = &n6;

    cout << Solution().isSymmetric(&n0) << endl;
}