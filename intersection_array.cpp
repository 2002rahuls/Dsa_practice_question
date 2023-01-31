#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> A{1,2,3,4,5,6};
    vector<int> B{1,2,3,4};
    vector <int> ans;
    vector<int> visited(B.size(),0);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B.size();j++){
            if(A[i]==B[j] && visited[j]==0){
                ans.push_back(B[j]);
                visited[j]=1;
                break;
            }
            else if(B[j]>A[i]) break;

        }
    }
    cout<<"The elements are: ";
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}