#include <iostream>
#include <vector>
using namespace std;

bool isSubsequence(string s, string t) {
    int m = s.length();
    int n = t.length();
    int j = 0; // Pointer for string s

    for (int i = 0; i < n; i++) {
        if (s[j] == t[i]) {
            j++; // Move pointer in s
        }
    }

    return j == m; // If we have traversed all of s, it's a subsequence
}

int main(){
    string s = "adc";
    string t = "ahbgdc";

    if (isSubsequence(s, t)) {
        cout << s << " is a subsequence of " << t << endl;
    } else {
        cout << s << " is not a subsequence of " << t << endl;
    }

    return 0;
}