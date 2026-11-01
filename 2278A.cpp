//https://codeforces.com/contest/2278/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){ 
    	int n,m;
    	cin>>n>>m;
    	string a,b;
    	cin>>a>>b;
    	string ans="";
    	for(int i=0;i<n;i++){
    	    for(int j=0;j<m;j++){
    	        if(a[i]==b[j]){
    	            a[i]='0';
    	            b[j]='0';
    	            break;
    	        }
    	    }
    	}
    	for(char ch :a){
    	    if(ch!='0'){
    	        ans+=ch;
    	    }
    	}
    	bool allb=true;
    	for(int i=0;i<m;i++){
    	    if(b[i]!='0'){
    	        allb=false;
    	        break;
    	    }
    	}
    	if((ans=="six"||ans=="sxi"||ans=="ixs"||ans=="isx"||ans=="xis"||ans=="xsi")&&allb){
    	    cout<<"Yes\n";
    	}
    	else{
    	    cout<<"No\n";
    	}
    }
}