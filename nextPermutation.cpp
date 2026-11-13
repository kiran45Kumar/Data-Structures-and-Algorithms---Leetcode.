#include <iostream>
#include <vector>
using namespace std;

vector<int> nextPermutation(vector<int>& nums){
    int n = nums.size();
    int right = n - 2;
    while (right >= 0 && nums[right] >= nums[right + 1]) {
        right--;
    }

    if(right >= 0) {
        int left = n - 1;
        while (nums[left] <= nums[right]) {
            left--;
        }
        swap(nums[right], nums[left]);
    }
}