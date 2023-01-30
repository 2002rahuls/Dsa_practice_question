#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n,int d){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=temp[(d+i)%n];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[]={1,2,3,4,5,6,7};
    rotate(arr,7,2);
}