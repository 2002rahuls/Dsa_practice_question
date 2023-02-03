#include <bits/stdc++.h>
using namespace std;

long long sumOfDivisors(int N)
    {
        long long ans=0;
        for(long long i=1;i<=N;i++){
            long s=((N/i)*i);
            cout<<s<<"-->"<<endl;
            ans+=s;
        }
        cout<<ans;
    }
    int main(){
        sumOfDivisors(4);

        return 0;
    }