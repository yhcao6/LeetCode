#include <iostream>
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
        if (n == 0)
            return 1;
        else if (n == 1)
            return 1;
        else{
            int steps[n + 1];
            steps[0] = 1;
            steps[1] = 1;
            for (int i = 2; i <= n; i++){
                steps[i] = steps[i - 1] + steps[i - 2];
            }
            return steps[n];
        }
    }
};


int main(){
    int input = 3;
    int res = Solution().climbStairs(input);
    cout << res << endl;
}