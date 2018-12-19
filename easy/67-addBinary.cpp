#include <iostream>
#include <algorithm>

using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string res;
        int i = a.size();
        int j = b.size();
        for (; i >= 0 and j >= 0; i--, j--) {
            if (a[i] == '0' and b[j] == '0') {
                if (carry == 0)
                    res += '0';
                else {
                    res += '1';
                    carry = 0;
                }
            } else if ((a[i] == '0' and b[j] == '1') or (a[i] == '1' and b[j] == '0')) {
                if (carry == 0)
                    res += '1';
                else {
                    res += '0';
                    carry = 1;
                }
            } else if (a[i] == '1' and b[j] == '1') {
                if (carry == 0) {
                    res += '0';
                } else {
                    res += '1';
                }
                carry = 1;
            }
        }
        while (i >= 0) {
            if (a[i] == '1') {
                if (carry == 1) {
                    res += '0';
                    carry = 1;
                } else {
                    res += '1';
                }
            } else {
                if (carry == 1) {
                    res += '1';
                } else {
                    res += '0';
                }
                carry = 0;
            }
            i--;
        }
        while (j >= 0) {
            if (b[j] == '1') {
                if (carry == 1) {
                    res += '0';
                    carry = 1;
                } else {
                    res += '1';
                }
            } else {
                if (carry == 1) {
                    res += '1';
                } else {
                    res += '0';
                }
                carry = 0;
            }
            j--;
        }
        if (carry == 1) {
            res += '1';
        }
        reverse(res.begin(), res.end());
        return res;
    }
};


int main() {
    string a = "1";
    string b = "111";
    string res = Solution().addBinary(a, b);
    cout << res << endl;
}
