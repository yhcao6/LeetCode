#include <iostream>

using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        bool split = false;
        int length = 0;
        for (char ss: s) {
            if (ss == ' ') {
                split = true;
            } else {
                if (split) {
                    length = 1;
                    split = false;
                } else
                    length += 1;
            }
        }
        return length;
    }
};

int main() {
    string input = "Hello World";
    int res = Solution().lengthOfLastWord(input);
    printf("%i\n", res);
}