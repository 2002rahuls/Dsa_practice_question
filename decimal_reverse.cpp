#include<bits/stdc++.h>
using namespace std;
int main(){
int X=234;
int num=X;
int d;
int c=0;
while(num!=0){
    d=num%10;
    c=c*10+d;
    num=num/10;


}
cout<<c;


    return 0;
}