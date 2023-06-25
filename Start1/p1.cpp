#include<bits/stdc++.h>

using namespace std;



int main(){
    string s;
    cin>>s; // input small letter a-> 97 z->122
    int string_hash[26] = {0}; // here in hash string a-> 0 and so on

    // pre-storing
    for(int i=0;i<s.length();i++){
        cout<<s[i];
        string_hash[s[i]-'a']++;
    }
    
    int q;
    cin>>q;
    while(q--){
        char alphabet;
        cin>>alphabet;
        cout<<"Occurence: "<<string_hash[alphabet-'a']<<"\n";
    }


    return 0;
}


