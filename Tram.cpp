#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, Totalenter = 0, TotalExit = 0, MinCapacity = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        Totalenter = b - a + Totalenter;
        if (Totalenter > MinCapacity)
        {
            MinCapacity = Totalenter;
        }
    }
    cout<<MinCapacity;
    return 0;
}