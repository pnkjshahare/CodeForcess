#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int limik_age = a * 3;
    int bob_age = b * 2;
    for (int i = 1; i <= 6; i++)
    {

        if (limik_age > bob_age)
        {
            cout << i;
            break;
        }
        limik_age = limik_age * 3;
        bob_age = bob_age * 2;
    }
    return 0;
}