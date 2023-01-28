#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int main(){
    vector<int> arr1 = {22,33,66,11,2};
    vector<int> arr2 = {3,22,1,44,0};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;



    return 0;
}