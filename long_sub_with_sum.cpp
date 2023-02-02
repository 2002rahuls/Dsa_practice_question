#include <bits/stdc++.h>
using namespace std;

 int lenOfLongSubarr(int A[],  int N, int K){
vector<int> ans;
ans.push_back(0);
int i=0;
    while(i<N){
        int sum=A[i];
        if(sum==K) ans.push_back(1);
        int j=i+1;
        while(j<N){
            sum=sum+A[j];
            if(sum==K){
               ans.push_back(j-i+1);
            }
j++;
        }
        i++;
    }
   int maxi=*max_element(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<" "<<endl;
    }
    cout<<maxi;
 }

 int main(){
int a[]={8,-9,10,-2,-10,6,18,17};
lenOfLongSubarr(a,8,17);
    return 0;
 }