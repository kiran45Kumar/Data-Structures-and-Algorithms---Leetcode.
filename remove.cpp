#include <iostream>
#include <vector>
using namespace std;

vector<int> removeElements(vector<int>& nums) {
    if (nums.empty()) return {};

    vector<int> result;    
    int i = 0;
    
    result.push_back(nums[i]);

    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i = j; 
            result.push_back(nums[i]); 
        }
    }
    
    return result;
}


int main(){
    vector<int>  nums = {1, 1, 2, 2, 3};
    vector<int> result = removeElements(nums);

    for (int num : result){
        cout<<num;
    }
    return 0;
}