#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }

    unordered_set<int> occurrences;
    for (const auto& pair : countMap) {
        if (occurrences.count(pair.second) > 0) {
            return false;
        }
        occurrences.insert(pair.second);
    }

    return true;
}

int main(){
    vector<int> arr = {1, 2, 3};
    bool result = uniqueOccurrences(arr);
    if (result) {
        cout << "All occurrences are unique." << endl;
    } else {
        cout << "There are duplicate occurrences." << endl;
    }

    return 0;
}