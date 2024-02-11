#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(c%2==0){
            if(a>b){
                cout<<"First\n";
            }
            else{
                cout<<"Second\n";
            }
        }
        else{
            if(b>a){
                cout<<"Second\n";
            }
            else{
                cout<<"First\n";
            }
        }
    }
    return 0;
}