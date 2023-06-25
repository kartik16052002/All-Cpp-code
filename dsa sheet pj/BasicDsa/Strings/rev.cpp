#include <iostream>
#include <string>
using namespace std;

string reverseStringWordWise(string s)
{
    s.trim();
    string output;
    int l = s.size();
    int e =l-1;
    for(int i = l-1;i>=0;i--){
        if(s[i] == ' '){
            output.append(s.substr(i+1,e-i));

            if(e-i != 0)
            output.append(" ");

            e = i-1;
        }

        if(i==0){
            if(s[i] == ' '){
                output.erase(output.size()-1,1);
            }
            output.append(s.substr(i,e+1));
        }
    }
    return output;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout<<"Printing ans now:"<<endl;
    cout << ans << endl;

    
    
}