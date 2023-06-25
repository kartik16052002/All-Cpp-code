#include<bits/stdc++.h>

using namespace std;

void sumP(int i, int s){
    // done using paramater changing
    if(i == 0){
        cout<<s;
        return;
    }
    sumP(i-1,s+i);
}

int main(){
    sumP(3,0); // print 3+2+1

    return 0;
}