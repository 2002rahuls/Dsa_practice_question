#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    t=3;
    	while(t--){
    int i=4458424;
    int count=0;
	    while(i>0){
            if(i%10==4){
                count++;
            }
            i=i/10;
        }
        cout<<count;
        }
	
    return 0;
}