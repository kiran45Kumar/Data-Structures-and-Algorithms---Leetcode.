#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";
    cout<<strs[0]<<endl;
    string prefix = "";

    for (int i = 0; i < strs[0].size(); i++)
    {
        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].size() || strs[0][i] != strs[j][i])
            {
                return prefix;
            }
        }
        prefix += strs[0][i];
    }
    return prefix;
}

int main()
{
    vector<string> strs = {"carpet", "car", "care"};
    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}