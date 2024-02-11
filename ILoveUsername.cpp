#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int high=arr[0];
    int low=arr[0];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(high<arr[i]){
            high=arr[i];
            cnt++;
        }
        if(low>arr[i]){
            low=arr[i];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}