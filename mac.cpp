#include <iostream>
#include <vector>
using namespace std;

int longest(vector<int>& nums, int k){
    int current_count = 0;
    int max_count = 0;

    for  (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            current_count++;
        } else {
            current_count = 0;
        }
        max_count = max(max_count, current_count);
    }
    return max_count;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1};
    int k = 2;

    int result = longest(nums, k);
    cout << "The maximum number of consecutive 1's in the array is: " << result << endl;

    return 0;
}