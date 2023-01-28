#include <bits/stdc++.h>
using namespace std;



void selection(int arr[],int n)
{

    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
               min =j;
            }
        }
        int t;
        t=arr[min];
        arr[min]=arr[i];
        arr[i]=t;

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
  selection(arr, n);
 cout<<"after"<<endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}