#include<iostream>

using namespace std;

int main(){
    int n,s;
    cout<<"val n,s: ";
    cin>>n>>s;
    int i=0,j=0;
    int st = -1,en = -1;
    int sum=0;
    int a[n];
    cout<<"Input array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(sum+a[j] <= s && j<n){
        sum+=a[j];
        j++;
    }
    if(sum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
        sum-=a[i];
        i++;
        }
        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;
    return 0;
}