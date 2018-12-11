#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res;
        if (strs.empty())
            return res;
        int i = 0;
        string s = strs[0];
        while (i < s.size())
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j].size() < i or strs[j][i] != s[i])
                    return res;
            }
            res += s[i];
            i += 1;
        }
        return res;
    }
};

int main()
{
    vector<string> input1 = {"flower", "flow", "flight"};
    vector<string> input2 = {"dog", "racecar", "car"};
    cout << Solution().longestCommonPrefix(input1);
    cout << Solution().longestCommonPrefix(input2);
    return 0;
}