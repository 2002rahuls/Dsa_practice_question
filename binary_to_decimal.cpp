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
     long long int dec=0;
    cout<<endl;
   
    //;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
 int gop[50];
    for(int j=31;j>=0;j--){
        gop[j]=d[31-j];
    }

    for(int j=0;j<=31;j++){
        cout<<gop[j];
    }
    cout<<endl;
     cout<<"...................."<<dec;

for(int i=0;i<=31;i++){
if(gop[i]==1){
    dec=dec+pow(2,31-i);
    cout<<endl<<dec;
}
else dec=dec;
}
cout<<endl;
cout<<dec;

// for(int i=31;i>=0;i--){

// if(d[i]==1){
//    dec= dec + pow(2,31-i);
// }
// else dec=dec;

// cout<<dec<<" ";
// }

// cout<<dec;








    return 0;

}