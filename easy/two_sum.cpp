#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        map<int, int> indexMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (indexMap[target - nums[i]] != 0)
            {
                res.push_back(indexMap[target - nums[i]] - 1);
                res.push_back(i);
                break;
            }
            else
            {
                indexMap[nums[i]] = i + 1;
            }
        }
        return res;
    }
};

int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> res = Solution().twoSum(nums, target);
    for (auto &v : res)
    {
        cout << v << endl;
    }
    return 0;
}