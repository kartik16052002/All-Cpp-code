#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        set<pair<int,int>> s;
        vector<int> v;
        for(int i=0;i<n;i++){
            s.insert({range[i][0],range[i][1]});
        }

        for(int i=0;i<q;i++){
            auto fptr = s.begin();
            int totalRange = (*fptr).second - (*fptr).first + 1;
            if(queries[i]<=totalRange){
                int cnt1 = 1;
                for(int i=(*fptr).first;i<=(*fptr).second;i++){
                    if(queries[i] == cnt1){
                        v.push_back(i);
                        break;
                    }
                    cnt1++;
                }
                continue;
            }

            auto bptr = s.begin();
            fptr++;
            while(fptr!=s.end()){
                if((*fptr).first > (*bptr).second){
                    int cnt2 = totalRange+1;
                    totalRange += (*fptr).second - (*fptr).first + 1;
                    if(queries[i]<= totalRange){
                        for(int i=(*fptr).first;i<=(*fptr).second;i++){
                            if(queries[i] == cnt2){
                            v.push_back(i);
                            break;
                            }
                            cnt2++;
                        }
                        break;
                    }
                }
                else{
                    int cnt3 = totalRange+1;
                    totalRange += (*fptr).second - (*bptr).second;
                    if(queries[i] <= totalRange){
                        for(int i = (*bptr).second+1;i<=(*fptr).second;i++){
                            if(queries[i] == cnt3){
                                v.push_back(i);
                                break;
                            }
                            cnt3++;
                        }
                        break;
                    } 
                }

                fptr++; bptr++;
            }
        }
        return v;
    } 
};

int main(){
    
 return 0;
}