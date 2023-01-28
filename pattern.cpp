#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n=5;
      for(int i=1;i<=n;i++)
        {
           
            for(int j=1;j<=2*n+1;j++){
                if(n-i<j && j<n+i)
            cout<<"*";
            else
            cout<<" ";
            }
             cout<<endl;
        }


        
         for (int i=n;i>0;i--){
	        
	        for(int j=2*n-1;j>0;j--){
	            if(j>n-i && j<n+i){
	                cout<<"*";
	            }
	            else
	            cout<<" ";
	        }
	        cout<<endl;
	    }






        return 0;


}