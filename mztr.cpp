#include <iostream>
using namespace std;
#include <vector>

void moveZerosToRight(vector<int>& arr) {
    int n = arr.size();
    int nonZeroIndex = 0; // Index to place the next non-zero element

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i]; // Move non-zero element to the front
        }
    }

    // Fill the remaining positions with zeros
    while (nonZeroIndex < n) {
        arr[nonZeroIndex++] = 0;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZerosToRight(arr);

    cout << "Array after moving zeros to the right: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}