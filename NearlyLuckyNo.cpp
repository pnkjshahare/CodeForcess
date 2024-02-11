#include <bits/stdc++.h>
using namespace std;
int main()
{
    int seven = 0, four = 0;
    string str;
    cin >> str;
  
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 4)
        {
            four++;
        }
        if (str[i] == 7)
        {
            seven++;
        }
    }
    if (seven >= 1 && four >= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}