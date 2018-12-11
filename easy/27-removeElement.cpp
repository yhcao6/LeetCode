#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.empty())
            return 0;
        int current_idx = 0;
        int length = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                nums[current_idx] = nums[i];
                current_idx += 1;
                length += 1;
            }
        }
        return length;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums({3, 2, 2, 3});
    cout << Solution().removeElement(nums, 3) << endl;
    for (auto num: nums)
        cout << num << " ";
    cout << endl;
    return 0;
}
