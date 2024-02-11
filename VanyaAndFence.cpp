#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    int cnt = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            cnt = cnt + 2;
        }
        else if(arr[i]<=h){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}