#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    for (int i = 1; i < 4; i++)
    {
        if (arr[j] != arr[i])
        {
            arr[j + 1] = arr[i];
            j++;
        }
    }
    if (j == 0)
    {
        cout << "3";
    }
    else
    {
        cout << 3 - j;
    }
    return 0;
}