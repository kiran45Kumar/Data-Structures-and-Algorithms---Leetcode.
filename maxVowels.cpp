#include <iostream>
#include <algorithm>
using namespace std;

class Solution {

    int isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
public:
    int maxVowels(string s, int k) {
        int max_count = 0;
        int current_count = 0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                current_count++;
            }
        }
        max_count = current_count;

        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i])) {
                current_count++;
            }
            if (isVowel(s[i - k])) {
                current_count--;
            }
            max_count = max(max_count, current_count);
        }

        return max_count;
    }
};

int main(){
    Solution solution;
    string s = "abciiidef";
    int k = 3;

    int maxVowelCount = solution.maxVowels(s, k);
    cout << "Maximum number of vowels in a substring of length " << k << ": " << maxVowelCount << endl;

    return 0;
}