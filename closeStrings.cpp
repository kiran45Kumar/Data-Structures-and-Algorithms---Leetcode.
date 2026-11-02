#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;
bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return  false;
        }

        unordered_set<char> set1(word1.begin(), word1.end());
        unordered_set<char> set2(word2.begin(), word2.end());

        if (set1 != set2) {
            return false;
        }

        unordered_map<char, int> freq1, freq2;
        for (char c : word1) {
            freq1[c]++;
        }
        for (char c : word2) {
            freq2[c]++;
        }

        vector<int> counts1, counts2;
        for (const auto& pair : freq1) {
            counts1.push_back(pair.second);
        }
        for (const auto& pair : freq2) {
            counts2.push_back(pair.second);
        }
        sort(counts1.begin(), counts1.end());
        sort(counts2.begin(), counts2.end());

        return counts1 == counts2;
    }

int main() {
    string word1 = "abc";
    string word2 = "bca";

    if (closeStrings(word1, word2)) {
        cout << "The strings are close." << endl;
    } else {
        cout << "The strings are not close." << endl;
    }

    return 0;
}