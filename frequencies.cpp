#include <bits/stdc++.h>
using namespace std;

void countfreq(int arr[], int n)
{

    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {

        if (visited[i] == true)

            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << "--->" << count << " ";
    }
}

int main()
{
    int arr[] = {2, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countfreq(arr, n);

    return 0;
}