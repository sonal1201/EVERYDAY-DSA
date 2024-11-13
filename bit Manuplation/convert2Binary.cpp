#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin>>n;

    string str="";
    while(n!=1){
        if(n%2==1) str+='1';
        else str+='0';

        n=n/2;
    }
    str+='1';

    reverse(str.begin(),str.end());

    cout<<str;
}