#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (nums.empty())
            return 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] >= target)
                return i;
        }
        return nums.size();
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums({1, 3, 5, 6});
    cout << Solution().searchInsert(nums, 0) << endl;
    return 0;
}
