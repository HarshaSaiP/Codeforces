//https://codeforces.com/problemset/problem/1327/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n >= k * k && (n - k) % 2 == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
