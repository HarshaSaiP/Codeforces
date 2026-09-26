//https://codeforces.com/problemset/problem/2267/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        int coins=0;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]) continue;
            if(s[i]==c || s[n-i-1]==c) coins++;
            else coins+=2;
        }
        cout<<coins<<endl;
    }
}