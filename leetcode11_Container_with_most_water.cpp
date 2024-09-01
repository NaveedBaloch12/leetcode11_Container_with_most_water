#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int> &height)
{
    int maxarea = 0;
    int n = height.size() - 1;
    int left = 0; 
    int right = n;
    
    while (left < right)
    {
        int width = right - left;
        int area = min(height[left], height[right]) * width;
        maxarea = max(maxarea, area);
        
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
}

int main()
{

    return 0;
}