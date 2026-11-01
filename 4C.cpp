//https://codeforces.com/contest/4/problem/C

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    map<string,int>mp;
    while(t--){
        string s;
        cin>>s;
        if(mp.find(s)==mp.end()){
            mp.insert({s,1});
            cout<<"OK"<<endl;
        }
        else{
            mp[s]++;
            cout<<s<<mp[s]-1<<endl;
        }
    }
}