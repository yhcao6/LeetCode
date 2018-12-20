#include <iostream>

using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        if (x == 1 or x == 0)
            return x;
        long low = 0;
        long high = x;
        long mid = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (mid * mid < x) {
                low = mid + 1;
            } else if (mid * mid > x) {
                high = mid - 1;
            } else {
                return mid;
            }
        }
        if (high * high < x) {
            return high;
        } else {
            return low;
        }
    }
};


int main() {
    int input = 10;
    int res = Solution().mySqrt(input);
    std::cout << res << std::endl;
}