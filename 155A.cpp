//https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int count=0;
	int mi=a[0],ma=a[0];
	for(int i=1;i<n;i++){
	    if(a[i]>ma){
	        ma=a[i];
	        count++;
	    }
	    if(a[i]<mi){
	        mi=a[i];
	        count++;
	    }
	}
	cout<<count;
}
