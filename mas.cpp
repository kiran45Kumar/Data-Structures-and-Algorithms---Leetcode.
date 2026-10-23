#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max_sum =  0;
        int current_sum = 0;

        for (int i = 0; i < k; i++){
            current_sum += nums[i];
        }
        max_sum = current_sum;

        for (int i = k; i < nums.size(); i++){
            current_sum = current_sum+nums[i] - nums[i - k];
            if (current_sum > max_sum){
                max_sum = current_sum; 
            }
        }

        return (double) max_sum / k;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double maxAverage = solution.findMaxAverage(nums, k);
    cout << "Maximum average: " << maxAverage << endl;

    return 0;
}
