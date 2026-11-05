//https://codeforces.com/problemset/problem/579/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int count=0;
	while(n>0){
	    if(n%2==1) count++;
	    n/=2;
	}
	cout<<count;

}

