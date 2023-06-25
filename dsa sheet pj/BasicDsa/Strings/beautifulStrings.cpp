#include<bits/stdc++.h>
using namespace std;

int makeBeautiful(string str) {
    int n = str.size();
    int minOp1 = 0;
    string temp;
    temp.insert(0,str);
    for(int i=1;i<n;i++){
        if(str[i] == str[i-1]){
            if(str[i-1] == '0') str[i]='1';
            if(str[i-1] == '1') str[i]='0';
            minOp1++;
        }
    }

    int minOp2 = 0;
    for(int i=n-2;i>=0;i--){
        if(temp[i] == temp[i+1]){
            if(temp[i+1] == '0') temp[i]='1';
            if(temp[i+1] == '1') temp[i]='0';
            minOp2++;
        } 
    }

    return min(minOp1,minOp2); 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<makeBeautiful(s)<<"\n";
    }
 return 0;
}