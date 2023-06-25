#include<bits/stdc++.h>
using namespace std;

int rep = 0;
    int count(int i,int sum, double arr[], int n, int target){
        if(i > n) return rep;
        sum+=arr[i];
        if(sum == target) rep++;
        count(i+1,sum,arr,n,target);
        sum-=arr[i];
        count(i+1,sum,arr,n,target);

        return rep;
    }
    
    int numOfWays(int n, int x)
    {
        int r = pow(n,1.0/x) + 1;
        // cout<<r<<"\n";
        
        double arr[r] = {0};
        for(int i=0;i<=r;i++){
            arr[i] = pow(i+1,x);
        }
        // for(auto i: arr) {cout<<i<<" ";}
        
    return count(0,0,arr,r,n);
    }


int main(){
    int c = numOfWays(10,2);
    cout<<"The number of Ways is: ";
    cout<<c;
 return 0;
}