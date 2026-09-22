//https://codeforces.com/contest/2266/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long score=0;
        long long k = b-a;
        long long l = (a+c)-b;
        cout<<max(k,l)<<endl;
    }
}