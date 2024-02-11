#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,cnt=0;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        p=str[i];
        if(p==57||p==72||p==81||p==43){
            cout<<"YES";
            break;
        }
        cnt++;
    }
    if(cnt>=str.size()){
        cout<<"NO";
    }
    return 0;
}