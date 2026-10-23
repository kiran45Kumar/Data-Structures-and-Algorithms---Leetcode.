
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string result = "";

        while (i < word1.length() || j < word2.length()) {
            if (i < word1.length()) {
                result += word1[i];
                i++;
            }

            if (j < word2.length()) {
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    string word1 = "abc";
    string word2 = "pqrs";

    string mergedString = solution.mergeAlternately(word1, word2);
    cout << "Merged string: " << mergedString << endl;

    return 0;
}