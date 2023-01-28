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

for (int i=31;i>=0;i--){
    cout<<d[i];
}

    return 0;
}