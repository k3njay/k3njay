#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void twoSum(int nums[], int target) {
        int n = 6;
        int pairs[n][2];
        int i = 0;
        for (int k = 0; k < n; k++) {
            for (int j = k + 1; j < n; j++) {
                if (nums[j] + nums[k] == target) {
                    pairs[i][0] = nums[k];
                    pairs[i][1] = nums[j];
                    i++;
                }
            }
        }
        for (int j = 0; j < i; j++)
            cout << pairs[j][0]<<" "<<pairs[j][1]<<endl;
    };
};
int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};
    Solution s;
    s.twoSum(nums, 4);
}