#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, X = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str[0] == 'X' && str[1] == '+')
        {
            X++;
        }
        if (str[0] == 'X' && str[1] == '-')
        {
            X--;
        }
        if (str[0] == '+')
        {
            ++X;
        }
        if (str[0] == '-')
        {
            --X;
        }
    }
    cout << X;
    return 0;
}