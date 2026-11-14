#include <iostream>
#include <vector>
#include <algorithm>
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
    reverse(nums.begin() + right + 1, nums.end());

    return nums;
}

int main(){
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}