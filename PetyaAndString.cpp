#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum1 = 0, sum2 = 0;
    string s1, s2;
    cin >> s1 >> s2;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    for (int i = 0; i < s1.size(); i++)
    {
        int p = s1[i];
        sum1 = sum1 + p;
        int p2 = s2[i];
        sum2 = sum2 + p2;
    }
    if (sum1 > sum2)
    {
        cout << "1" << endl;
    }
    else if (sum1 < sum2)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}
