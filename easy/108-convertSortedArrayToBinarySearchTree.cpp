#include <iostream>
#include <vector>
#include "../dataType/TreeNode.h"
#include "../utils/prettyPrintTree.h"

using namespace std;

class Solution {

public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return helper(nums, 0, (int) nums.size() - 1);
    }

    TreeNode *helper(vector<int> &nums, int left, int right) {
        if (left > right)
            return NULL;
        int center = (left + right) / 2;
        TreeNode *node = new TreeNode(nums[center]);
        node->left = helper(nums, left, center - 1);
        node->right = helper(nums, center + 1, right);
        return node;
    }

};

int main() {
    vector<int> input({-10, -3, 0, 5, 9});
    TreeNode *res = Solution().sortedArrayToBST(input);
    PrettyPrintTree().prettyPrint(res);
}