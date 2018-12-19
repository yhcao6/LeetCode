#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int maxSum = -std::numeric_limits<int>::max();
        int currentSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            currentSum = currentSum + nums[i];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};


int main() {
    // vector<int> input ({-2, 1, -3, 4, -1, 2, 1, -5, 4});
    vector<int> input ({-2});
    int res = Solution().maxSubArray(input);
    printf("%i\n", res);
}
