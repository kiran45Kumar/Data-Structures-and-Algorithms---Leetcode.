#include <iostream>
#include <vector>
#include "rotated_search.h"

using namespace std;

int main() {

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Test Case 1: "
         << (RotatedSortedArray(nums, 0) == 4 ? "PASS" : "FAIL")
         << endl;

    cout << "Test Case 2: "
         << (RotatedSortedArray(nums, 3) == -1 ? "PASS" : "FAIL")
         << endl;

    cout << "Test Case 3: "
         << (RotatedSortedArray(nums, 6) == 2 ? "PASS" : "FAIL")
         << endl;

    return 0;
}