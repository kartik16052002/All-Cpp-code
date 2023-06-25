#include<bits/stdc++.h>

using namespace std;

int main(){
    // code here
    int x,s;
    double val = 0;
    cin>>x;
    int t = x;
    while(x>0){
        s = x%10;
        cout<<s<<" ";
        val += pow(s,3);
        cout<<val<<"\n";
        x/=10;
    }

    if(val==t) cout<<"Armstrong Number";
    else cout<<"Not a Armstrong Number";
    return 0;
}