#include <bits/stdc++.h>
using namespace std;
int wineSelling(int Arr[], int N){
    int b=0,s=0,ans=0;
    while(b<N && s<N){
        while(Arr[b]<=0){
            b++;
            if(b==N)return N;
        }
        while(Arr[s]>=0){
            s++;
            if(s==N)return N;
        }
        if(abs(Arr[b])>=abs(Arr[s])){
            ans=ans+abs(b-s)*(abs(Arr[s]));
            Arr[b]=Arr[b]+Arr[s];
            Arr[s]=0;
            
        }
            else{
                ans=ans+abs(b-s)*Arr[b];
                Arr[s]=Arr[s]+Arr[b];
                Arr[b]=0;
            }
            
             cout<<".........";
        }
        cout<<ans;
       
        
    }
int main(){
    int a[]={5,-4,1,-3,1};
    wineSelling(a,5);


    return 0;
}