#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == NULL and q == NULL) {
            return true;
        } else if ((p == NULL and q != NULL) or (p != NULL and q == NULL)) {
            return false;
        } else {
            return p->val == q->val and isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
        }
    }
};


int main() {
    TreeNode n0(1);
    TreeNode n1(2);
    TreeNode n2(1);

    TreeNode n3(1);
    TreeNode n4(1);
    TreeNode n5(2);
    n0.left = &n1;
    n0.right = &n2;
    n3.left = &n4;
    n3.right = &n5;

    cout << Solution().isSameTree(&n0, &n3) << endl;
}