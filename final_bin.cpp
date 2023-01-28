#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int d[50];
    for(int i=31;i>=0;i--){
        d[i]=x%2;
        x=x/2;
    }
    
    for(int i=0;i<32;i++){
        cout<<d[i];
    }
cout<<endl;


int rev[50];
    
    for(int i=31;i>=0;i--){
        rev[31-i]=d[i];
        
    }

for(int i=0;i<=31;i++){
    cout<<rev[i];
}

int dec=0;
// for(int i=31;i>=0;i--){

// if(rev[i]==1){
//    dec= dec + pow(2,31-i);
// }
// else dec=dec;



cout<<endl;
cout<<dec;

   return 0;
}