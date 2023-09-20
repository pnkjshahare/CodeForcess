#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int n;
    cin >> n;
    int p = n + 1;
    while (n < p)
    {
        int year = p;
        while (p > 0)
        {
            int digit = p % 10;
            p = p / 10;
            st.insert(digit);
        }
        if (st.size() == 4)
        {
            cout << year;
            break;
        }
        p++;
    }
    return 0;
}