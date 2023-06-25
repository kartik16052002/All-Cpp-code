#include<bits/stdc++.h>


using namespace std;

void markrow(int x,int mat[4][4]){
    for(int i=0;i<4;i++){
        if(mat[x][i] != 0)
        mat[x][i] = -1;
    }
}

void markcol(int x,int mat[4][4]){
    for(int i=0;i<4;i++){
        if(mat[x][i] != 0)
        mat[i][x] = -1;
    }
}

int main(){
    // set matrix

    int n=4,m=4;
    int mat[n][m] = {{1,1,1,1}, {1,0,0,1}, {1,1,0,1}, {1,1,1,1}};

    // printing matrix
    cout<<"Matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    // bruteforce approach
    // first make row and col element = -1 in which 0 is present and afterward convert that -1 to 0
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(mat[i][j] == 0){
    //             // making row and col = -1
    //             markrow(i,mat);
    //             markcol(j,mat);
    //         }
    //     }
    // }

    // // converting all -1 to 0
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //        if(mat[i][j] == -1)  mat[i][j] =0;
    // }
    // }

    // cout<<"required matrix:\n";
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";



    // Better approach

    // int rowMat[4] = {0};
    // int colMat[4] = {0};

    // for(int i=0;i<n;i++){
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(mat[i][j] == 0){
    //             rowMat[j] = 1;
    //             colMat[i] = 1;
    //         }
    //     }
        
    // }

    // for(int i=0;i<n;i++){
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(rowMat[j] == 1 || colMat[i] == 1) mat[i][j] = 0;
    //     }
        
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    

 return 0;
}