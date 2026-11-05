#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;

    while (left < right) {
        int width = right - left;
        int minheight = min(height[left], height[right]);   
        int current_area = minheight * width;
        max_area = max(max_area, current_area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}


int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(height);
    for (int num : height){
        cout<<num<<" ";
    }
    cout << "Max area: " << result << endl;
}
