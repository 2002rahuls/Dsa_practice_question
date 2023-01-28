#include <iostream>
using namespace std;
void mergesort(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

void merge(int a[],int l,int mid,int r){
    int i=l;
    int j=mid+1;
    int k=l;
    int b[1000];
while(i<=mid&&j<=r)
{
    if(a[i]<a[j]){
        b[k]=a[i];
        i++;
    }
    else{
        b[k]=a[j];
        j++;
    }
    k++;
}
if(i>mid){
    while(j<=r){
        b[k]=a[j];
        j++;
        k++;
    }
}
    else{
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
        for(k=l;k<r;k++){
            a[k]=b[k];
        }

    }



}

int i = l ;        
        int j = m + 1;   
        int f = l ;     
        int temp[100000] ; 

        

        while (i <= m && j <= r) {
            if (arr[i] < arr[j]) {
                temp[f] = arr[i]  ;
                i++ ;
            }
            else {
                temp[f] = arr[j]  ;
                j++ ;
            }
            f++ ;
        }

        

        if (i > m) {
            while (j <= r) {
                temp[f] = arr[j]  ;
                f++ ; j++ ;
            }
        }
        else {
            
            while (i <= mid) {
                temp[f] = arr[i]  ;
                f++ ; i++ ;
            }
        }

        
        for (int f = l ; f <= r; f++) {
            arr[f] = temp[f] ;
        }
    }
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r) {
            int mid = (l + r) / 2 ;
            mergeSort(arr, l, m)  ;  
            mergeSort(arr, m + 1, r)  ; 
            merge(arr, l, m, r)  ; 
        }
    }