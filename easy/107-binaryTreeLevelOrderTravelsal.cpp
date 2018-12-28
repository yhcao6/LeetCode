#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        vector<vector<int>> res;
        if (root == nullptr)
            return res;
        levelOneOrderTravelsal(root, res, 1);
        reverse(res.begin(), res.end());
        return res;
    }

    void levelOneOrderTravelsal(TreeNode *root, vector<vector<int>> &res, int level) {
        if (res.size() < level) {
            res.push_back(*new vector<int>);
        }
        res[level - 1].push_back(root->val);
        if (root->left != nullptr)
            levelOneOrderTravelsal(root->left, res, level + 1);
        if (root->right != nullptr)
            levelOneOrderTravelsal(root->right, res, level + 1);
    }
};


int main() {
    TreeNode root(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);
    root.left->left = new TreeNode(4);
    root.left->right = new TreeNode(5);
    vector<vector<int>> res = Solution().levelOrderBottom(&root);
    for (vector<int> &v: res) {
        for (int vv: v) {
            cout << vv << " ";
        }
        cout << endl;
    }
}