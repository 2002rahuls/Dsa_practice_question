#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=1234;
 int r=n%10;
 while(n>9){
n=n/10;
 }
 cout<<r+n<<endl;

}