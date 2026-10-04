//https://codeforces.com/contest/1542/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n*2];
        int oc=0,ec=0;
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(a[i]%2==0) ec++;
            else oc++;
        }
        if(oc==ec){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        
    }
}