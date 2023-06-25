#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        if(N%groupSize>0) return false;

        map<int,int> mp;
        for(auto it: hand){
            mp[it]++;
        }

        while(!mp.empty()){
            int a = mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[a+i]==0) return false;
                else{
                    mp[a+i]--;
                    if(mp[a+i]==0) mp.erase(a+i);
                }
            }
        }
        return true;
    }
};

int main(){
    
 return 0;
}