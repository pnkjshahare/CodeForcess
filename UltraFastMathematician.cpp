#include <bits/stdc++.h>
using namespace std;
int main()
{    vector<int>v;
int cnt=0,cnt1=1;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
       if(s1[i]==s2[i]){
        
        v.push_back(cnt);
       }
       else{
        v.push_back(cnt1);
       }
    }
   for(int i=0;i<v.size();i++){
    cout<<v[i];   }
    return 0;
}