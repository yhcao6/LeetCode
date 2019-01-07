#include <iostream>
#include <queue>
#include "prettyPrintTree.h"
#include "../dataType/TreeNode.h"

using namespace std;

void PrettyPrintTree::prettyPrint(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode *front = q.front();
        cout << front->val << endl;
        q.pop();
        if (front->left != NULL)
            q.push(front->left);
        if (front->right != NULL)
            q.push(front->right);
    }
};
