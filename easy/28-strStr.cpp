#include <iostream>
using namespace std;

class Solution
{
  public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
            return 0;
        if (needle.size() > haystack.size())
            return -1;
        for (int i = 0; i < haystack.size() - needle.size() + 1; i++){
            if (haystack[i] != needle[0])
                continue;
            bool isEqual = true;
            for (int j = 0; j < needle.size(); j++){
                if (haystack[i + j] != needle[j]){
                    isEqual = false;
                    break;
                }
            }
            if (isEqual){
                return i;
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{
    string haystack = "hello";
    string needle = "ll";
    cout << Solution().strStr(haystack, needle) << endl;
    return 0;
}
