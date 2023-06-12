#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second) return a.first<b.first;
    else return a.second>b.second;
}       

int main(){
    cout<<"start"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
       mp[arr[i]]++;
    }
    vector<pair<int,int>> v;
    for(auto it: mp){
        v.push_back(it);
    }
    
    // for(auto x: v){
    //     cout<<x.first<<" "<<x.second<< endl;
    // }
    sort(v.begin(),v.end(),comp);

    for(auto i:v){
        for(int j=0;j<i.second;j++){
            cout<<i.first<<" ";

        }
        
    }

    return 0;
}