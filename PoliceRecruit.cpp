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
int sum=0;
int cnt=0;
for(int i=0;i<n;i++) {
    if(arr[i]>0){
        sum=sum+arr[i];
    }
    if(arr[i]<0 && sum==0){
        cnt++;
    }
    if(arr[i]<0 && sum >0){
        sum--;
    }
}
cout<<cnt;
    return 0;
}