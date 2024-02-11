#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
int high=n;
int low=1;
int diff=arr[n]-arr[1];
for(int i=2;i<=n;i++){
    int diff1=arr[i]-arr[i-1];
    if(diff1<diff){
        diff=diff1;
        low=i;
        high=i-1;
    }
}
cout<<high<<" "<<low;
return 0;
}