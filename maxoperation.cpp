#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


// vector<int> sort(vector<int>& nums) {
//     int left = 0, right  = nums.size() - 1, temp = 0;
//     while (left < right){
//         nums[left] = nums[left] + nums[right];
//         nums[right] = nums[left] - nums[right];
//         nums[left] = nums[left] - nums[right];
//         left++;
//         right--;
//     }
//     return nums;
// }
int maxOperations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;
    int operations = 0;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == k) { 
            operations++;
            left++;
            right--;
        }
        else if (sum < k) {
            left++;
        }
        else {
            right--;
        }
    }

    return operations;
}

int main() {
    vector<int> nums = {4, 3, 2, 1};
    int k = 5;
    int result = maxOperations(nums, k);
    cout << "Maximum number of operations: " << result << endl;
    return 0;
}