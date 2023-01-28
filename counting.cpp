#include <bits/stdc++.h>
using namespace std;

void counter(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        mp.insert({i, 0});
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <=n)
        {
            mp[arr[i]]++;
        }
        else continue;
    }
    for (auto x : mp)
    {
        cout << x.first << "--->" << x.second << endl;
    }
}

int main(){

 int arr[] = {2, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    counter(arr, n);
    return 0;
}

