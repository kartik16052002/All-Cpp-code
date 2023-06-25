#include<bits/stdc++.h>
using namespace std;

bool isPossible(int *arr, int n)
{
    //  Write your code here.

    bool flag1 = true,flag2 = true;
    int copyarr[n];
    copy(arr,arr+n,copyarr);
    for(int i=0;i<n-1;i++){
        // cout<<"First part "<<"iteration: "<<i<<" "<<arr[i]<<" "<<arr[i+1]<<"\n";
        if(copyarr[i] > copyarr[i+1]){
            // cout<<"Entered 1\n";
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
        cout<<"Second part "<<"iteration: "<<i<<" "<<arr[i]<<" "<<arr[i-1]<<"\n";
        if(arr[i] < arr[i-1]){
            cout<<"Entered 1\n";
            if(!flag1){
                cout<<"Entered 2\n";
                flag2 = false;
                break;
            }
            flag1 = false;
            arr[i-1] = arr[i];
        }
    }

    if(flag1 || flag2) return true;

    return false;
}
int main(){
    int arr[3]  = {8,4,6};
    cout<<isPossible(arr,3);
 return 0;
}