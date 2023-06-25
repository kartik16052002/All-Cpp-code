#include<bits/stdc++.h>
using namespace std;

string enccode(string &message)
{
    string out;
    int n = message.size(); int i=0;
    char val = message[0];
    while(i<n-1){
        int j=1;
        while(message[i] == message[i+1]  && i<n-1){
            j++; i++;
            
        }
        out = out + val + to_string(j);

        i++;
        val = message[i];

        if(i == n-1){
            j=1;
            out = out + val + to_string(j);
        }
    }
    return out;
}

string encode(string &message){
    string out;
    int n = message.size();
    int i = 0;
    char val = message[0];

    while (i < n) {
        int j = 1;
        while (i < n - 1 && message[i] == message[i + 1]) {
            j++;
            i++;
        }

        out += val + to_string(j);

        if (i == n - 1) {
            break;
        }

        i++;
        val = message[i];
    }

    return out;
}

int main(){
    string s = "oxtljfhgqm";
    cout<<encode(s)<<endl;
 return 0;
}