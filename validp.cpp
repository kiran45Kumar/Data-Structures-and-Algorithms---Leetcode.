// valid palindrome
#include <iostream>
using namespace std;
#include <cctype>   // Required for isalnum() and tolower()
#include <string>

bool IsvalidPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    if (std::isalnum(static_cast<unsigned char>(s[left])) && std::isalnum(static_cast<unsigned char>(s[right]))) {
    if (std::tolower(static_cast<unsigned char>(s[left])) != std::tolower(static_cast<unsigned char>(s[right]))) {
        return false; 
    }
    left++;
    right--;
} 
else if (!std::isalnum(static_cast<unsigned char>(s[left]))) {
    left++;
} 
else {
    right--;
}
    return -1;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    bool isValid = IsvalidPalindrome(s);
    if (isValid){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
}