#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int length = 1;
        int lastNum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != lastNum)
            {
                nums[length] = nums[i];
                lastNum = nums[i];
                length += 1;
            }
        }
        return length;
    }
};

int main()
{
    vector<int> nums({1, 1, 2});
    // vector<int> nums ({1, 1});
    cout << "length: " << Solution().removeDuplicates(nums) << endl;
    for (auto num : nums)
        cout << num << " ";
    cout << endl;
    return 0;
}