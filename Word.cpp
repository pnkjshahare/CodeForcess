#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int lower = 0, upper = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int size = str[i];
        if (size >= 65 && size <= 90)
        {
            upper++;
        }
        if(size>=97&&size<=122){
            lower++;
        }
    }
    if(upper>lower){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    cout<<str<<endl;
    return 0;
}