#include <iostream>
using namespace std;

class Solution
{
  public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        if (n == 2)
            return "11";
        string lastSay = "11";
        for (int i = 3; i <= n; i++)
        {
            string say("");
            int count = 0;
            int j;
            for (j = 0; j < lastSay.size() - 1; j++)
            {
                count += 1;
                if (lastSay[j] != lastSay[j + 1])
                {
                    say += to_string(count);
                    say += lastSay[j];
                    count = 0;
                }
            }
            count += 1;
            say += to_string(count);
            say += lastSay[j];
            lastSay = say;
            say = "";
        }
        return lastSay;
    }
};

int main(int argc, char const *argv[])
{
    int input = 5;
    cout << Solution().countAndSay(input) << endl;
    return 0;
}