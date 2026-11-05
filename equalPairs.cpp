#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        map<vector<int>, int> mp;

        // Step 1: Store all rows
        for (int i = 0; i < n; i++) {
            mp[grid[i]]++;
        }
        cout << "Row map: " << endl;
        for (const auto& pair : mp) {
            cout << "[";
            for (const auto& val : pair.first) {
                cout << val << " ";
            }
            cout << "] : " << pair.second << endl;
        }
        // Step 2: Construct each column
        for (int j = 0; j < n; j++) {
            vector<int> col;
            cout << "Column " << j << ": ";
            for (int i = 0; i < n; i++) {
                col.push_back(grid[i][j]);
            }
            cout << "[";
            for (const auto& val : col) {
                cout << val << " ";
            }
            cout << "]" << endl;

            // Step 3: Check if column exists
            if (mp.find(col) != mp.end()) {
                count += mp[col];
            }
        }

        return count;
    }
};


int main(){
    
    Solution s;
    vector<vector<int>> grid = {{3,2,1},{1,7,6},{2,7,7}};

    cout << s.equalPairs(grid) << endl;

    return 0;
}