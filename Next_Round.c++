#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, num, count = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
    }
    num = arr[k];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > 0 && arr[i] >= num)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}