#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n=3;
    for(int i=0;i<=n+1;i++){
          for(int k=0;k<n-i;k++){
            cout<<"";
        }
       
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
      
        cout<<endl;

    }

    for(int i=n;i>0;i--){
          for(int k=0;k<n-i;k++){
            cout<<"";
        }
       
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
      
        cout<<endl;

    }





    return 0;
}