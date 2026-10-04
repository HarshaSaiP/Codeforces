//https://codeforces.com/contest/2044/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string k;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='p')
                k+='q';
            else if(s[i]=='q')
                k+='p';
            else
                k+='w';
        }
        // reverse(k.begin(),k.end(),k.begin());
        cout<<k<<endl;
    }
}
