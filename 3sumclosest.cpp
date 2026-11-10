#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int closestSum = nums[0] + nums[1] + nums[2];

    for (int  i = 0; i < nums.size() - 2; i++){
        int left = i + 1;
        int right = nums.size() - 1;
        while(left < right){
            int currentSum = nums[i] + nums[left] + nums[right];
            if(abs(currentSum - target) < abs(closestSum - target)){
                closestSum = currentSum;
            }
            else if(currentSum < target){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return closestSum;
}

int main(){
    int target = 1;
    vector<int> nums = {-1, 2, 1, -4};

    int result = threeSumClosest(nums, target);
    cout << "The sum that is closest to the target " << target << " is: " << result << endl;
}