#include<bits/stdc++.h>
using namespace std;



vector<int> find_missing_repeating(vector<int> array)
{
    int n = array.size() + 1;

    vector<int> substitute(n, 0); 

    vector<int> ans;              
    for (int i = 0; i < array.size(); i++)
    {
        substitute[array[i]]++;
    }

    for (int i = 1; i <= array.size(); i++)
    {
        if (substitute[i] == 0 || substitute[i] > 1)
        {
            ans.push_back(i);
        }
    }

    cout<<"missing"<<ans[1]<<" repeating"<<ans[0];
}

int main(){
   vector <int> arr{1,3,3,4,5};
    find_missing_repeating(arr);


    return 0;
}