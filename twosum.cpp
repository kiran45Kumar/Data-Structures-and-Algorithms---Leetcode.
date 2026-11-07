#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    map<int, int> numToIndex;
    
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            return {numToIndex[complement], i};
        }
        numToIndex[nums[i]] = i;
    }
    
    return {};
}

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << ": ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "No solution found." << endl;
    }
    return 0;
}