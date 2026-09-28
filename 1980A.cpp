//https://codeforces.com/contest/1980/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        vector<int> v(7,0);
        for(int i=0;i<n;i++){
            v[a[i]-'A']++;
        }
        int count=0;
        for(int i=0;i<7;i++){
            if(v[i]<m){
                count+=m-v[i];
            }
        }
        cout<<count<<endl;
    }
}