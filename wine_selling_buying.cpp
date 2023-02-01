#include <bits/stdc++.h>
using namespace std;
 int wineSelling(int Arr[], int N)
{
    // Code here.
    long long ans = 0;

    for (int i = 1; i < N; i++)
    {

        Arr[i] += Arr[i - 1];
       

        if (Arr[i - 1] > 0)

            ans += Arr[i - 1];

        else

            ans -= Arr[i - 1];
             cout<<i<<" "<<Arr[i]<<" "<<ans<<endl;
    }

    cout<< ans;
}

int main(){
    int a[]={-1,-1,-1,1,1,1};
    wineSelling(a,6);


    return 0;
}