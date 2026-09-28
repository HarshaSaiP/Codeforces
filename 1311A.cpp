//https://codeforces.com/contest/1311/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a%2==0 && b%2==0 && b>a){
            cout<<2<<endl;
        }
        else if(a%2==1 && b%2==0 && b<a){
            cout<<2<<endl;
        }
        else if(a%2==1 && b%2==1 && a<b){
            cout<<2<<endl;
        }
        else if(a%2==0 && b%2==1 && b<a){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}