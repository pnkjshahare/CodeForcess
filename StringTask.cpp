#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
for(int i=1;i<str.size();i++){
    str[0]='.';
    int p=str[i];
    if(p>=65&&p<=90){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    if(p==65||p==69||p==73||p==79||p==85||p==97||p==101||p==105||p==111||p==117){
        str[i]= '.';
    }
   
}
cout<<str;
return 0;
}