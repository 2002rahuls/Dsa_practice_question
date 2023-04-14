#include <bits/stdc++.h>
using namespace std;
int main(){
    int index=-1;
    int arr[];
for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
        index=i;
        break;
    }
}
if(index==-1){
    reverse(arr.begin(),arr.end());
}

for(int i=n-1;i>=index;i--){
if(arr[i]>arr[index]){
swap(arr[i],arr[index]);
break;
}
}
reverse(arr.begin()+index+1,arr.end());
return arr;



}