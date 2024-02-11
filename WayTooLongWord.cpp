#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // string str1, str2, str3, str4;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        int size=str.size();
        if(size>10){
            cout<<str[0]<<size-2<<str[size-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }

    return 0;
}