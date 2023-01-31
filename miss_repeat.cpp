#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,5,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    int l[size+1];
    for(int i=0;i<size+1;i++)
    l[i]=0;
    int t=0;
for(int i=0;i<size;i++){
    int k=a[i];
    l[k]++;

}
int y[2];

for(int i=1;i<size+1;i++){
    if(l[i]==0  ){
       cout<<"missing  "<<i<<endl;
    }
    
}
for(int i=1;i<size+1;i++){
    if(l[i]>1  ){
       cout<<"repeating  "<<i;
    }
}



    return 0;
}