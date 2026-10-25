#include <iostream>
using namespace std;
#include <vector>
#include <climits>
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num;
            } else {
                return true;
            }
        }

        return false;
    }

int main() {
    vector<int> arr = {12, 11, 8, 9, 10};

    if (increasingTriplet(arr)) {
        cout << "The array has an increasing triplet." << endl;
    } else {
        cout << "The array does not have an increasing triplet." << endl;
    }

    return 0;
}