//https://codeforces.com/problemset/problem/1360/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int minDiff=INT_MAX;
        for(int i=n-1;i>0;i--){
            if((a[i]-a[i-1])<minDiff){
                minDiff=a[i]-a[i-1];
            }
        }
        cout<<minDiff<<endl;
    }
}
