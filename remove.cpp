#include <iostream>
#include <vector>
using namespace std;

int removeElements(vector<int>& nums) {
    if (nums.empty()) return {};

    vector<int> result;    
    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    
    return i + 1;
}


int main(){
    vector<int>  nums = {1, 1, 2, 2, 3};
    int result = removeElements(nums);

    for (int i = 0; i < result; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}