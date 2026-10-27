#include <iostream>
#include <vector>
using namespace std;

vector<int> longest(vector<int>& nums){
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
    return {max_count};
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1};
  //  int k = 2;

    vector<int> result = longest(nums);
    cout << "The maximum number of consecutive 1's in the array is: " << result[0] << endl;

    return 0;
}