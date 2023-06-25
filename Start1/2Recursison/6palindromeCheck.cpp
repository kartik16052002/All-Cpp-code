#include<bits/stdc++.h>

using namespace std;

bool palindrome(int i, string arr, int n){
    if(i>=n/2) return true;

    if(arr[i] != arr[n-i-1]) return false;

    return palindrome(i+1,arr,n);
}

int main(){
    // int arr[] ={'m','a','d','s','m'};
    string arr ="madsm";
    cout<<arr[1]<<"\n";
    if(palindrome(0,arr,5)) cout<<"Palindrome";
        else cout<<"Not a palindrome";
    return 0;
}