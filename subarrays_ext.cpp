 
 #include<bits/stdc++.h>
using namespace std;

 long long pairWithMaxSum(long long arr[], long long N)
    {
       long long sum=0;
  long long maxm=INT_MIN;
  for(int i=0;i<N-1;i++){
      sum=arr[i]+arr[i+1];
      maxm=max(maxm,sum);
  }
  cout<< maxm;
          
      
    }

int main(){
      long long  arr[]={4, 3, 1, 5, 6};
      pairWithMaxSum(arr,5);

        return 0;
    }