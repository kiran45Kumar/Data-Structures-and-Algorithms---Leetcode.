#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            for (int k = 1; k <= j; k++){
                cout << i * j * k << " ";
            }
            cout << " ";
        }
        cout << endl;
    }
}