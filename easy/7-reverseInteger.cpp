#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

class Solution
{
  public:
    int reverse(int x)
    {
        if (x == 0)
            return 0;
        bool isNeg = x < 0;
        if (isNeg)
            x = -x;
        long res_int = 0;
        while (x != 0)
        {
            res_int *= 10;
            res_int += x % 10;
            x /= 10;
        }
        if (isNeg)
            res_int = -res_int;
        if (res_int < INT_MIN or res_int > INT_MAX)
            return 0;
        else
            return (int)res_int;
    }
};

int main()
{
    int a = -2147483648;
    cout << Solution().reverse(a) << endl;
    return 0;
}