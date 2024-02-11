#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, oddcnt = 0, evencnt = 0, p, q;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencnt++;
            p = i;
        }
        else
        {
            oddcnt++;
            q = i;
        }
    }
    if (evencnt == 1)
    {
        cout << p << endl;
    }
    if (oddcnt == 1)
    {
        cout << q << endl;
    }
    return 0;
}