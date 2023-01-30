#include <bits/stdc++.h>
using namespace std;

void zeroes(int arr[],int n){


    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }

    vector <int> zarr;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zarr.push_back(i);
        }
        }

// int t=0;
    // for(int i=0;i<n;i++){
        
    //     if(arr[i]==0){
            
    //         zarr[t]=i;
    //         t++;
    //     }
    // }
    
int g=0;
int s=zarr.size();
for(int i=0;i<n;i++){
    if(arr[i]!=0){
    arr[g]=temp[i];
    g++;
    }

}

for(int j=n-s;j<=n;j++){
    arr[j]=0;
}



//printing
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
  
    
}

int main(){

    int arr[]={0,0,0,0,4};
    zeroes(arr,5);
}