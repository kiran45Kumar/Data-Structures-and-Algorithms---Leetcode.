#include <iostream>
#include <vector>
using namespace std;


int longest(vector<int>& nums, int k){
    int left = 0, right = 0;
    int maxLength = 0;
    int zeroCount = 0;
    
    while(right < nums.size()){
        if(nums[right]==0){
            zeroCount++;
        }
        if (zeroCount > k){
            if(nums[left]==0){
                zeroCount--;
            }
            left++;
        }

        if (zeroCount <= k){
            maxLength = max(maxLength, right - left + 1);
           
        }
        right++;

    }
    return maxLength;
}   

int main() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    int result = longest(nums, k);
    cout << "The length of the longest subarray with at most " << k << " zeros is: " << result << endl;

    return 0;
}