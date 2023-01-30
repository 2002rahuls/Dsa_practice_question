#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int k, int n) 
	{
	    
	   //  Creating an Array to store the Original Array Elements..
	    int temp[n];
	    
	   // Getting the Index , From where we have to rotate..
	    int start = k % n;

	  
	   // // Copy the Original Array elements to the Another Array , that we have declared above..
	    for(int i = 0 ; i<n ; i++){
	        temp[i] = arr[i];
	    }
	    
	    // Logic for Rotation of Array & Copy in the Original Array...
	    for(int i = 0 ; i<n ; i++){
	      arr[i] =  temp[ (start + i) % n];
	    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"  ";
        }
	} 
int main()
{
    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};
    leftRotate(arr,2, n);
}