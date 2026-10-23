#include <iostream>
#include <vector>
using namespace std;


vector<int> sort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
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
    vector<int> nums = {1, 2, 3, 4};
    int k = 5;

    sort(nums);
    int result = maxOperations(nums, k);

    cout << "Maximum number of operations: " << result << endl;

    return 0;
}