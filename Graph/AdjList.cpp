// Space Complexity O(V+E)...

#include <bits/stdc++.h>
using namespace std;

const int N = 10e6 +10;

vector<int>graph;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
}