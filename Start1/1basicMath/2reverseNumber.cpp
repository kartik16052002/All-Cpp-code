#include<bits/stdc++.h>
using namespace std;

// reverse a number, dont include trailing zeros while revering it
int main(){
    int x,c,dig;
    int rnum = 0;
    cin>>x;
    dig = (int)(log10(x)+1);
    cout<<"Digits are: "<<dig<<"\n";
    
    while(x!=0){
    dig--;
    
    c = x%10;
    // rnum += c*pow(10,dig);
    rnum = (rnum*10) + c;
    // cout<<"value of c: "<<c<<" Value of dig "<<dig<<" Value of rnum: "<<rnum<<"\n";
    x/=10;
    }

    cout<<"Reversed number: "<<rnum<<"\n";
    return 0;
}


// if(flag == 0){
//         if(c == 0) x/=10;
//         else flag = 1;
//     }