#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}