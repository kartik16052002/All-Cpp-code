#include<iostream>

using namespace std;

int main(){
    int n,s;
    cout<<"Enter the value of array length and subarray sum: "<<endl;
    cin>>n>>s;
    int arr[n];
    cout<<"Array filling: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    int st = 0,e = 1;
    int *start, *end;
    start=arr;
    end=arr+1;
    sum = *start + *end;
    while(1){

        if(s==(n-1) && e==(n-1)){
            cout<<"Not able to find"<<endl;
            break;
        }

        if(st==e){
            if(sum == *start){
                cout<<"Starting and ending index are: "<<st;
                break;
            }
            end++;e++;
            sum+=(*end);
        }
            

        if(sum<s && e<(n-1)){
            if(e == (n-1)){
                cout<<"Not able to find"<<endl;
                break;
            }
            end++;e++;
            sum+=(*end);
        }
        if(s == sum){
            cout<<"Starting index: "<<st<<" Ending index: "<<e<<endl;
            break;
        }
        if(sum>s){
            sum-=(*start);
            start++;st++;
            if(st!=e)
            sum+=(*start);
        }
        
    }
     cout<<"\ndone";   
    return 0;
}