#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    string str;
    int size;
    cin>>size;
    cin >> str;
   
    if (size < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            str[i] = tolower(str[i]);
            st.insert(str[i]);
        }
        if (st.size() >= 26)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}