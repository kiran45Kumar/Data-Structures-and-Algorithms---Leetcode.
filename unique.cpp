#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<int> uniqueElements(vector<int>& nums) {
    unordered_set<int> s;
    for (int num : nums) {
        s.insert(num);
    }
    vector<int> result(s.begin(), s.end());
    sort(result.begin(), result.end());
    return result;
}

int main(){
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    vector<int> result = uniqueElements(nums);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}