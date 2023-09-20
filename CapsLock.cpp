#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int size = str[0];
    if (size >= 97 && size <= 122)
    {
        size = size - 32;
        str[0] = size;
        // cout<<str[0];
    }
    for (int i = 1; i < str.size(); i++)
    {
        int p=str[i];
        if(p>=65&&p<=90){
            p=p+32;
            str[i]=p;
        }
    }
    cout<<str;
    return 0;
}