#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=123;
    int num=n;
    int d;
    int c=0;

    while(num!=0)
    {
        d=num%10;
        c=c*10+d;
        num=num/10;

 
    }
    if(c==n) cout<<"Yes";
    else cout<<"no";

return 0;
}