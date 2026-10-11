//https://codeforces.com/problemset/problem/556/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int z=0,o=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') z++;
        else o++;
    }
    cout<<abs(o-z);
}
