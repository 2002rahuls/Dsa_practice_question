#include <bits/stdc++.h>
using namespace std;

void insertion(int a[],int n){

for(int i=1;i<n;i++){
    int current=a[i];
    int j=i-1;
    while(j>=0 &&a[j]>current){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=current;
    }
}




int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  insertion(arr, n);
 cout<<"after"<<endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}