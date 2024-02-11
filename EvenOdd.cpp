#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int p=n/2;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) != 0)
        {
           arr[i]=i;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
         arr[p+i]=i;  
        }
    }
    cout<<arr[k+1];
    return 0;
}