#include <iostream>
using namespace std;
int main(){
    string s="abcabca";

    int n=s.size();
    for(int m=n/2 -1;m>=0;m--){
        if(s.substr(0,m+1)==s.substr(m+1,m+1)) 
        cout<< m+1+1+(n-2*(m+1));
    }
    

    return 0;

}