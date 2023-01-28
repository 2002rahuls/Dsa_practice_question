#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n)
{
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int t;
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
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
  bubble(arr, n);
 cout<<"after"<<endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}