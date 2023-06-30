#include<bits/stdc++.h>
using namespace std;

// bruteforce and not applicable for all test cases
int isDivisible(string s){
	    //complete the function here
	    int len = s.size();
	    int num=0,multiplier = 1;
	    for(int i=len-1;i>=0;i--){
	        int t = (s[i]-'0')*multiplier;
	        num += t;
	        multiplier *= 2;
	    }
	    
	    if(num % 3 == 0) return 1;
	    
	    return 0;
	    
	}

// better ->  based on mathematical approch and understanding
int isDivisible(string s){
	    //complete the function here
	    int len = s.size();
	    int odd = 0; // will count the number of 1's at odd pos of string
	    int even = 0;// will count the number of 1's at even pos of stirng
	    int pos = 1;
	    for(int i = len-1; i>=0; i--){
	        if(pos % 2 == 0){
	            if(s[i] == '1') even++;
	        }else{
	            if(s[i] == '1') odd++;
	        }
	        pos++;
	    }
	    
	    int val = abs(even - odd);
	    
	    if(val % 3 == 0) return 1;
	    
	    return 0;
	}



int main(){
    string s = "0011";
    cout<<isDivisible(s)<<endl;
 return 0;
}