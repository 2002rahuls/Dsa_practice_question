#include <bits/stdc++.h>
using namespace std;
int matSearch(int mat[3][3],int N,int M,int X){
    int i=0,j=M-1;
    while(i<N && j>=0){
        if(mat[i][j]>X) j--;
        else if(mat[i][j]<X) i++;
        else{
            cout<<1;
            return 1;
            

        } 
    }
    cout<<0;
    return 0;
}

int main(){
int arr[3][3]={ {1, 5, 9},
                    {14, 20, 21},
                    {30, 34, 43} };

matSearch(arr,3,3,2);
    return 0;
}