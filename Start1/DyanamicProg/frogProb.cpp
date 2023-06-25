#include<bits/stdc++.h>
using namespace std;

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int i = n-1;
    int right = INT_MAX;
    if(i == 0) return 0;
    int left =  frogJump(i, heights) + abs(heights[i] - heights[i-1]);
    if(i>1)
    int right = frogJump(i, heights) + abs(heights[i] - heights[i-2]);

    return min(left,right);
}
int main(){
    
 return 0;
}