#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        vector<int> res;
        int i = 0, j = 0;
        while (i < m and j < n){
            if (nums1[i] < nums2[j]){
                res.push_back(nums1[i]);
                i++;
            } else {
                res.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m){
            res.push_back(nums1[i]);
            i++;
        }
        while (j < n){
            res.push_back(nums2[j]);
            j++;
        }
        for (i = 0; i < res.size(); i++){
            nums1[i] = res[i];
        }
    }
};

int main() {
    vector<int> nums1({1, 2, 3, 0, 0, 0});
    int m = 3;
    vector<int> nums2({2, 5, 6});
    int n = 3;
    Solution().merge(nums1, m, nums2, n);
    for (int v: nums1) {
        cout << v << " ";
    }
    cout << endl;
}
