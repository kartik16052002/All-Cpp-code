#include<bits/stdc++.h>

using namespace std;

int sumFun(int n){
    if(n==1) return 1;
    return n + sumFun(n-1);
}

int main(){
    // whole operation happpens during return phase
    cout<<sumFun(5);
    return 0;
}