#include <iostream>
#include <string>
using namespace std;

class Solution
{
  public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        string s = to_string(x);
        int i = 0;
        long j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};

int main()
{
    int input = 10;
    cout << Solution().isPalindrome(input) << endl;
    return 0;
}