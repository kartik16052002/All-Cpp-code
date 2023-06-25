#include<bits/stdc++.h>
using namespace std;

class Solution{
    

    
    long double density(int N, vector<int> par){
        // code here
        int h = 1;
        vector<int>temp;
        
        if(N>1){
            temp.push_back(0);
        }

        for(int i=1;i<N;i++){
            if(par[i] != par[i-1]){
                int flag = 0;
                for(int j=0;j<temp.size();j++){
                    if(temp[j] == par[i]) flag = 1;
                }
                if(flag == 1){
                    h++;
                    temp.clear();
                    temp.push_back(i);
                }else{
                    temp.push_back(i);
                }

            }else{
                temp.push_back(i);
            }
        }

        double density = h/N;
        
        cout << setprecision(7);

        return density;
    }
};

int main(){
    
 return 0;
}