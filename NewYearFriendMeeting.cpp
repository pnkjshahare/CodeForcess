#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int sum = 0, sum1 = 0;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        sum = a - b;
        sum1 = a - c;
        if (sum > sum1)
        {
            cout << sum;
        }
        else
        {
            cout << sum1;
        }
    }
    else if (b > a && b > c)
    {
        sum = b - a;
        sum1 = b - c;
        if (sum > sum1)
        {
            cout << sum;
        }
        else
        {
            cout << sum1;
        }
    }
    else if (c > a && c > b)
    {
        sum = c - a;
        sum1 = c - b;
        if (sum > sum1)
        {
            cout << sum;
        }
        else
        {
            cout << sum1;
        }
    }
    return 0;
}