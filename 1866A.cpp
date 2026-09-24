//https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<0)
            a[i]*=-1;
        m = min(m,a[i]);
        
    }
    cout<<m;
}
