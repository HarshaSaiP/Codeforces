//https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            int sume=0,sumo=0;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
                sume+=i;
            }
            for(int i=1;i<=n-3;i+=2){
                cout<<i<<" ";
                sumo+=i;
            }
            cout<<sume-sumo<<endl;
        }
    }
}
