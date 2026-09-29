//https://codeforces.com/problemset/problem/2167/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
