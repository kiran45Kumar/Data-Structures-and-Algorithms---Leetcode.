
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    vector<vector<int>> result(2);

    // Elements in nums1 but not nums2
    for (const auto& num : set1) {
        if (set2.find(num) == set2.end()) {
            result[0].push_back(num);
        }
    }

    // Elements in nums2 but not nums1
    for (const auto& num : set2) {
        if (set1.find(num) == set1.end()) {
            result[1].push_back(num);
        }
    }

    return result;
}

int main() {

    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {3, 4, 5, 6};

    vector<vector<int>> answer = findDifference(nums1, nums2);

    cout << "Nums1 exclusive: ";
    for (int num : answer[0]) {
        cout << num << " ";
    }

    cout << "\nNums2 exclusive: ";
    for (int num : answer[1]) {
        cout << num << " ";
    } 

    return 0;
}
