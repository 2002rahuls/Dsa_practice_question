#include<bits/stdc++.h>
using namespace std;



int findZeroes(int arr[], int n, int m) {
        // code here
        int j=-1;
        int count=0;
        int ans=0,len;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
            while(count>m){
                j++;
                if(arr[j]==0){
                    count--;
                }
            }
            len=i-j;
            if(len>ans){
                ans=len;
            }
        }
        cout<< ans;
}

int main(){
int a[]={1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1 };
findZeroes(a,11,2);



    return 0;
}