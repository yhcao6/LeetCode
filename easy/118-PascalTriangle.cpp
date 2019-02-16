#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for (int i = 0; i < numRows; i++){
            vector<int> curRow;
            if (i == 0){
                curRow.push_back(1);
                res.push_back(curRow);
            } else {
                vector<int> lastRow = res.back();
                curRow.push_back(1);
                for (int j = 0; j < lastRow.size() - 1; j++){
                    curRow.push_back(lastRow[j] + lastRow[j + 1]);
                }
                curRow.push_back(1);
                res.push_back(curRow);
            }
        }
        return res;
    }
};

int main(){
    int input = 5;
    vector<vector<int>> res = Solution().generate(input);
    for (auto v: res){
        for (auto num: v){
            printf("%i ", num);
        }
        printf("\n");
    }
}
