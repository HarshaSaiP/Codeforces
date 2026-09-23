//https://codeforces.com/contest/43/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string t1,t2,team;
    int c1=0,c2=0;
    cin>>t1;
    c1++;
    for(int i=0;i<n-1;i++){
        cin>>team;
        if(team==t1){
            c1++;
        }
        else{
            c2++;
            t2=team;
        }
    }
    if(c1>c2){
        cout<<t1;
    }
    else{
        cout<<t2;
    }
}