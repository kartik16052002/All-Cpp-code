#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        bool flag1 = true,flag2 = true;
    int copyarr[n];
    copy(nums.begin(),nums.end(),copyarr);
    for(int i=0;i<n-1;i++){
        if(copyarr[i] > copyarr[i+1]){
            if(!flag1){
                cout<<"Entered 2\n";
                flag2 = false;
                break;
            }
            flag1 = false;
            copyarr[i+1] = copyarr[i];
        }
    }

    if(flag1 || flag2) return true;

    flag1 = true; flag2 = true;

    for(int i=n-1;i>0;i--){
        
        if(nums[i] < nums[i-1]){
            if(!flag1){
                
                flag2 = false;
                break;
            }
            flag1 = false;
            nums[i-1] = nums[i];
        }
    }

    if(flag1 || flag2) return true;

    return false;
    }
};
int main(){
    
 return 0;
}