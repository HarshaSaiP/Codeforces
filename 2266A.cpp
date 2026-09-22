//https://codeforces.com/contest/2266/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        int m = min(a,b);
        m=min(m,c);
        cout<<n-m<<endl;
    }
}