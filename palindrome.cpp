#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 123;
    int s[100];
    int c, d;
    int count = 0;
    int num = n;
    cout<<"before : "<<n<<endl;
    for (int i = 0; num != 0; i++)
    {
        c = num % 10;

        s[i] = c;
        num = num / 10;
        count++;
        
    }

cout<<"after :";

    for (int i = 0; i < count; i++)
    {
        cout << s[i];
    }
    cout << endl;

    // int t[100];
    // for (int i = count - 1; i >= 0; i--)
    // {
    //     t[i] = s[count - 1 - i];
    // }
    // for (int i = 0; i < count; i++)
    // {
    //     cout << t[i];
    // }
    int a = 0;
    // for (int i = 0; i < count; i++)
    // {
    //     if (t[i] == s[i])
    //     {
    //         a++;
    //     }

    //     else
    //         a = a;
    // }
    // cout << endl;
    // cout << a;

    return 0;
}