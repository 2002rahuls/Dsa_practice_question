 #include<bits/stdc++.h>
using namespace std;
 
 long long maxSubarraySum(int arr[], int n){
        long long maxm=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxm=max(maxm,sum);
            if(sum<0) sum=0;
           
        }
        cout<< maxm;
        
    }

    int main(){
      int  arr[]={1,2,3,-2,5};
      maxSubarraySum(arr,5);

        return 0;
    }