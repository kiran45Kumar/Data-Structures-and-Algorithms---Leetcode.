#include <iostream>
#include <vector>
using namespace std;


int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0; // Index to place the compressed characters


    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            count++;
            i++;
        }  
        if (count == 1){
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str) {
                chars[idx++] = dig; 
            }
        }
        i--; // Adjust i since the outer loop will increment it
    }

    chars.resize(idx); // Resize the vector to the new length
    return idx;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int newLength = compress(chars);

    cout << "Compressed characters: ";
    for (char ch : chars) {
        cout << ch << " ";
    }
    cout << endl;
    cout << "New length: " << newLength << endl;

    return 0;
}