#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<vector<int>> arr = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

    cout << "2D Array:" << endl;
    for (int j = 0; j < arr[0].size(); j++) {
        int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i][j] << " ";
        sum += arr[i][j];
    }
    cout << "Sum of column " << j << ": " << sum << endl;
}
    return 0;
}