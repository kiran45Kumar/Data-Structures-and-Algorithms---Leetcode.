// valid palindrome
#include <iostream>
using namespace std;
#include <cctype> // Required for isalnum() and tolower()
#include <string>

bool IsvalidPalindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (std::isalnum(static_cast<unsigned char>(s[left])) && std::isalnum(static_cast<unsigned char>(s[right])))
        {
            if (std::tolower(static_cast<unsigned char>(s[left])) != std::tolower(static_cast<unsigned char>(s[right])))
            {
                return false;
            }
            left++;
            right--;
        }
        else if (!std::isalnum(static_cast<unsigned char>(s[left])))
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return true;
}

int main()
{
    string s = "racecar";
    bool isValid = IsvalidPalindrome(s);
    if (isValid)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}