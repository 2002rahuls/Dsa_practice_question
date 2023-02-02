#include<bits/stdc++.h>
using namespace std;

int dupli(int arr[],int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int k=st.size();
    int j=0;
     for (int x: st) {
    arr[j++] = x;
  }
  for(int i=0;i<k;i++){
    cout<<arr[i]<<" ";
  }
    
}
int main(){
int arr[]={2,2,3,3,4};
dupli(arr,5);

    return 0;
}