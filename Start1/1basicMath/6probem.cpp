#include<bits/stdc++.h>

using namespace std;



int main(){
    int n = 10;
    int arr[] = {0, 1, 1, 1, 1};

    int i=0,cnt=0,m,j,js,jump=0,flag = 0;
        
        
        while(i<n-1){
            jump++; // will count the min number of jumps taken to reach the end of the array
            if((i+arr[i]) >= (n-1)) break; // last breaking condition

            // logic of how long the jump should bbe
            m = arr[i+1];
            if(arr[i+1] != 0) flag = 1;
            js = 1; // min value
            for(j = i+2; j <= i+arr[i]; j++){
                if(arr[j] != 0) flag = 1;
                cnt++; // counting number of comparisons done
                if(arr[j]>m){
                    m = arr[j];
                    js += cnt;
                    cnt = 0;
                }
                

            }
            if(flag == 0){ 
                cout<<"Invalid"<<"\n";
                break;
            }
            i = i+js;
            cnt = 0;
            flag = 0;
            cout<<"Jump no: "<<jump<<" i = "<<i<<"\n";
        }

        cout<<"Jump Value is : "<<jump;

    return 0;
}