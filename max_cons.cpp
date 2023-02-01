#include<bits/stdc++.h>
using namespace std;

int findZeroes(int arr[], int n, int m) {
int cnt=0;
int i=0;
int ans=0;
for(int j=0;j<n;j++){
    if(arr[j]==0){
cnt++;
    } 
    while(cnt>m){
        if(arr[i]==0){
            cnt--;
            i++;
        }
    }
    ans=max(ans,j-i+1);
}
cout<<ans;
}

int main(){
int a[]={1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
findZeroes(a,11,2);



    return 0;
}