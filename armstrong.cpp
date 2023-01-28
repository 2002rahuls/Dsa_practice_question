#include<bits/stdc++.h>
using namespace std;
int main(){
int n=31;  
int num=n;
int d;
int c=0;
while(num!=0){
    d=num%10;
    c=c+pow(d,3);
    num=num/10;

}
if(c==n) cout<< "Yes";
else cout<< "No";

    return 0;
}