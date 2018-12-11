#include <iostream>
#include <map>
using namespace std;

class Solution
{
  public:
    int romanToInt(string s)
    {
        map<char, int> roman_to_int;
        roman_to_int['I'] = 1;
        roman_to_int['V'] = 5;
        roman_to_int['X'] = 10;
        roman_to_int['L'] = 50;
        roman_to_int['C'] = 100;
        roman_to_int['D'] = 500;
        roman_to_int['M'] = 1000;

        int res = 0;
        int i = 0;
        for (; i < s.size() - 1; i++)
        {
            if (roman_to_int[s[i]] >= roman_to_int[s[i + 1]])
                res += roman_to_int[s[i]];
            else
                res -= roman_to_int[s[i]];
        }
        res += roman_to_int[s[i]];
        return res;
    }
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    string roman_number = "MCMXCIV";
    cout << Solution().romanToInt(roman_number) << endl;
    return 0;
}