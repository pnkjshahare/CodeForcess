#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p = 0, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = p; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            if (arr[i] != arr[j])
            {
                count++;
                p=j+1;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}