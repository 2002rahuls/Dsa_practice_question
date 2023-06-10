#include<bits/stdc++.h>
using namespace     std;
void reverseS(char name[],int size){
    int s=0;
    int e=size-1;
    swap(name[s++],name[e--]);

}


int getLength(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0'; i++){
        cnt++;

    }
    return cnt;
}

int main(){
    char n[20];

    cout<<"enter a string"<<endl;

    cin>>n;
    cout<<n<<endl;
    int len=getLength(n);
    cout<<"Length: "<<len<<endl;
     reverseS(n,len);
    cout<<n<<endl;

}