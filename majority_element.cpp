 #include <bits/stdc++.h>
using namespace std;

  int majorityElement(int a[], int size)
  {
    map<int,int> mpp;
        for(int i=0;i<size;i++){
            mpp[a[i]]++;
        }
        for(auto it: mpp){
            if(it.second>size/2){
                cout<< it.first;
            }
                  }
       
  }
  int main(){
    int a[]={3,1,3,3,2};
    majorityElement(a,5);
    return 0;
  }