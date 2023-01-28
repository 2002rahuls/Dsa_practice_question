#include <bits/stdc++.h>
using namespace std;



void countfreq(int arr[],int n)
{
map<int,int>mpp;
for(int i=0;i<n;i++){
    mpp[arr[i]]++;
}

    for(auto x:mpp){
        cout<<x.first<<"---> "<<x.second<<endl;;

    }


}
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countfreq(arr, n);
    return 0;
}