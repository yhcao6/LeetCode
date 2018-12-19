#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> res;
        digits[digits.size() - 1] += 1;
        int carry = 0;
        for (int i = digits.size() - 1; i >= 0; i--){
            if (digits[i] + carry == 10){
                carry = 1;
                res.push_back(0);
            } else {
                res.push_back(digits[i] + carry);
                carry = 0;
            }
        }
        if (carry == 1)
            res.push_back(1);
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    vector<int> inputs({9, 9});
    for (int v: Solution().plusOne(inputs)) {
        printf("%i ", v);
    }
    printf("\n");
}