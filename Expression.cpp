#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    // cin >> a >> b >> c;
    int sum1, sum2, sum3, sum4, sum5;
    sum1 = a + b * c;
    sum2 = a * (b + c);
    sum3 = a * b * c;
    sum4 = (a + b) * c;
    sum5 = a + b + c;

     if (sum1 >= sum2 && sum1 >= sum3 && sum1 >= sum4 && sum1 >= sum5)
    {
        cout << sum1;
    }
    else if (sum2 > sum1 && sum2 > sum3 && sum2 > sum4 && sum2 >= sum5)
    {
        cout << sum2;
    }
    else if (sum3 > sum1 && sum3 > sum2 && sum3 > sum4 && sum3 >= 5)
    {
        cout << sum3;
    }
    else if (sum4 > sum1 && sum4 > sum2 && sum4 > sum3 && sum4 >= sum5)
    {
        cout << sum4;
    }
    else if (sum5 > sum1 && sum5 > sum2 && sum5 > sum3 && sum5 >= sum4)
    {

    } return 0;
}