#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int totalHours = a;

    while (a >= b)
    {
        int newCandles = a / b;
        totalHours += newCandles;
        a = newCandles + a % b;
    }

    cout << totalHours << endl;

    return 0;
}