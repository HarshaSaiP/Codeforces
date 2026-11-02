//https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string a,b,c;
	cin>>a>>b>>c;
	string d = a+b;
	sort(c.begin(),c.end());
	sort(d.begin(),d.end());
	if(c==d){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}

}
