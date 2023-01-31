#include<bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N){
int sum=0;
for(int i=0;i<N-1;i++){
    sum=sum+A[i];
}
int k=(N*(N+1))/2;
cout<<k-sum;
}

int main(){
   int a[]={1,2,3};
   missingNumber(a,4);
   return 0;

}