#include <iostream>
#include <vector>
using namespace std;
int largestAltitude(vector<int>& gain){
    int maximum = 0; 
    int current = 0;

    for (int i = 0; i < gain.size(); i++){
        current += gain[i];
        maximum = max(current, maximum);
    }
    return maximum;
}

int main(){
    vector<int> gain = {-4,-3,-2,-1,4,3,2};
    int largest = largestAltitude(gain);
    cout<<largest;
}