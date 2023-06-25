#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        set<int> s;
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=range[i][0];j<=range[i][1];j++){
                s.insert(j);
            }
        }

        for(int i=0;i<q;i++){
            int c=1,f=1;
            for(auto it =s.begin();it!=s.end();it++){
                if(c == queries[i]){
                    v.push_back(*it);
                    f=1;
                    break;
                }
                else{f=0;}
                
                c++;
            }
            if(f == 0) v.push_back(-1); 
        }

        return v;
    } 
};

int main(){
    
 return 0;
}