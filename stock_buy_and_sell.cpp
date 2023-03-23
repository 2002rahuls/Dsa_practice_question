#include <bits/stdc++.h>
using namespace std;
void stockBuySell(int price[], int n)
{
    vector<int> buy; 
    vector<int>sell;
    int i = 0, cnt = 0;
    while (i < n - 1)
    {
        while ((i < n - 1) && (price[i] >= price[i + 1]))
            i++;
        if (i == n - 1)
            break;
        buy.push_back(i++);
        while ((i < n) && (price[i] >= price[i - 1]))
            i++;
        sell.push_back(i - 1);
        cnt++;
   }
    if (cnt == 0)
        cout << "No Profit";
    else
    {
        for (int j = 0; j < cnt; j++)
        {
            cout << "(" << buy[j] << " " << sell[j] << ") ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {275,5};
    stockBuySell(arr, 2);
    return 0;
}
