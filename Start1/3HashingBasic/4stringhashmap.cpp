#include<bits/stdc++.h>

using namespace std;

// in hash array we store the integer values of character but in map that's not the case

int main(){
    string s;
    cin>>s;

    map<char,int>mp;

    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }

    char c;
    cin>>c;
    cout<<"Occurence: "<<mp[c];


    return 0;
}