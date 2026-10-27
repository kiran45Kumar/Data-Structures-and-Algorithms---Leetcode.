#include <iostream>
#include <vector>
using namespace std;


vector<int> sort(vector<int>& nums) {
    int left = 0, right  = nums.size() - 1, temp = 0;
    while (left < right){
        temp = nums[left]-nums[right];
        nums[left] = nums[left] - nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
    return nums;
}
int maxOperations(vector<int>& nums, int k) {
    int left = 0, right = nums.size() - 1;
    int operations = 0;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == k) {
            nums.erase(nums.begin() + right);
            operations++;
            left++;
            right--;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }

    return operations;
}

int main() {
    vector<int> nums = {4, 3, 2, 1};
    int k = 5;

    vector<int> sorted = sort(nums);
    for (int num : sorted){
        cout << num<<" ";
    }
    cout << endl;
    int result = maxOperations(nums, k);

    cout << "Maximum number of operations: " << result << endl;

    return 0;
}