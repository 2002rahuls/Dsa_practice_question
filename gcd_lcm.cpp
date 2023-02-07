#include<bits/stdc++.h>
using namespace std;
vector<long long> lcmAndGcd(long long A , long long B) {
      vector<int> ans;
      long long mul=A*B;
        while(A>0 && B>0){
            if(A>B) A=A%B;
            else B=B%A;
           
        }
        int gcd;
         if(A==0){
             gcd=B;
            
         }
            else{
                gcd=A;
                 
            }
            int  lcm;
            lcm=mul/gcd;
      
      cout<<"   lcm is  "<<lcm<<"   gcd is "<<gcd;
        
        
    }
int main(){
long a=5;
long b=10;
int l,g;
lcmAndGcd(a,b);


return 0;
}