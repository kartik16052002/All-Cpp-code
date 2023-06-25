#include<bits/stdc++.h>

using namespace std;

int main(){
    

    int arr[] = {2,3,3,3,8,8,10,16,25,112};// size = 10
    // bool res = binary_search(arr,arr+10,112);
    // cout<<res;

    // Q. Find the first occurence of a X in a sorted array if it doesn't exist print -1

    int X;
    cin>>X;
    // explanation of lower_bound
    // if element is present it will point to its first occurence and if it is not present it will point
    // to the closest greater number to that number
    int ind = lower_bound(arr,arr+10,X) - arr;

    if(ind != 10 && arr[ind] == X)
        cout<<"Element is present at "<<ind<<"\n";
        else
            cout<<"-1\n";

    // Q. Find the last occurence

    // explanation upper bound
    // In a sorted array it will point to the number greater than that number(given number) and if the
    // number is not present then also it will point to the number greater than that number and if the 
    // number greater than that number is also not present then it will point outside the array.
    int iu = upper_bound(arr,arr+10,X) - arr;
    iu--;

    if(iu>=0 && arr[iu] == X)
        cout<<"Last occurence of element is at "<<iu<<"\n";
        else cout<<"-1\n";

    // Q. Find the smallest number greater than X in a sorted array.

    int ip = upper_bound(arr,arr+10,X) - arr;
    if(ip<10) cout<<"Smallest number greater than X is "<<arr[ip]<<"\n";
    else cout<<"No such number exist in the array\n";

    return 0;
}