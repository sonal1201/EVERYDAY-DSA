#include <bits/stdc++.h>

using namespace std;
int main(){
    string str;
    cin>>str;

    int len = str.length();
    int p2 =1;
    int num =0;

    for(int i=len-1;i>=0;i--){
        if(str[i]=='1'){
            num+=p2;
        }
        p2+=2;
    }

    cout<< num;
}