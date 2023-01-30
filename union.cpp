#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++){
    freq[arr1[i]]=1;
  }
// for(auto it:freq){
//     cout<<it.first<<"  "<<it.second<<endl;
//   }
// cout<<"***************************************"<<endl;
  for (int i = 0; i < m; i++)
   {

    freq[arr2[i]]=freq[arr2[i]]+1;
   }
//    for(auto it:freq){
//     cout<<it.first<<"  "<<it.second<<endl;
//   }
  for (auto   it: freq){
    Union.push_back(it.first);
  }
  return Union;
//   for(auto it:freq){
//     cout<<it.first<<"  "<<it.second<<endl;
//   }
}

int main() {
  int n = 5, m = 3;
  int arr1[] = {0, 2, 3, 4, 5};
  int arr2[] = {1,2,3};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is " << endl;
  for (auto  val: Union)
    cout << val << " ";
  return 0;
}