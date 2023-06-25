#include<bits/stdc++.h>


using namespace std;


int main(){

    char s[6] = {'?','m','?','?','?','?'};

  int n = 6;
        // checking for palindrome and converting ? wherever necessary
        for(int i=0;i<n/2;i++){

            if(s[i] == s[n-1-i]){
                
            }
            else if(s[i] == '?'){
                s[i] = s[n-1-i];
            }
            else if(s[n-1-i] == '?'){
                s[n-1-i] = s[i];
            }
            else{
                cout<<"\n-1\n";
            }
        }

        for(int i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
        cout<<"\n";

        // solving "?" problem at starting
        // moving p to that position, after which no ? occurs
        int p = 0; int flag=0;
        for(int i=0;i<=n/2;i++){
            if(s[i] == '?'){
                flag = 1; // shows that ? occured at first pos
                if(s[i+1] == '?'){
                    p++;
                }
                else{
                    break;
                }
                
            }
            else{
                break;
            }
        }

        

        if(p == n/2){ // it means that whole array is of '?'.
            cout<<"\n0\n";
        }
        if(p!=0 || flag==1){// making all ?(from starting till p) equal to after ? val
            s[p] = s[p+1];
            s[n-1-p] = s[p];

            for(int i=p-1;i>=0;i--){
                s[i] = s[p];
                s[n-1-i] = s[p];
            }
        }else{
            p = -1; // if no ? at first pos
        }
            
        

        for(int i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
        cout<<"\n";

        // solving after clearing the issue of ? at front
        // taking values such that adjacent diff is alwaya less
        for(int i=p+2;i<=n/2;i++){ 
            if(s[i] == '?'){
                s[i] = s[i-1];
                s[n-1-i] = s[i];
            }
        }

        for(int i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
        cout<<"\n";

        int sum = 0;
        
        for(int i=0;i<n/2-1;i++){
            sum  = sum + (2*abs(s[i] - s[i+1]));
        }
    
        if(n%2 != 0){
            sum = sum + abs(s[n/2]-s[n/2+1]);
        }

        cout<<"\n"<<sum<<"\n"; 


 
}