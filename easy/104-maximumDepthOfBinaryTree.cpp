#include <iostream>
#include <queue>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {
    }
};

class Solution {
public:
    int maxDepth(TreeNode *root) {
        if (root == NULL)
            return 0;
        // root depth is 1
        root->val = 1;
        queue<TreeNode*> q;
        q.push(root);
        int currentDepth = 1;
        while (!q.empty()){
            TreeNode* n = q.front();
            q.pop();
            if (n->val > currentDepth)
                currentDepth += 1;
            if (n->left != NULL){
                n->left->val = currentDepth + 1;
                q.push(n->left);
            }
            if (n->right != NULL){
                n->right->val = currentDepth + 1;
                q.push(n->right);
            }
        }
        return currentDepth;
    }
};


int main()
{
    TreeNode n0(3);
    TreeNode n1(9);
    TreeNode n2(20);
    TreeNode n3(15);
    TreeNode n4(7);

    n0.left = &n1;
    n0.right = &n2;
    n2.left = &n3;
    n2.right = &n4;
    cout << Solution().maxDepth(&n0) << endl;
}