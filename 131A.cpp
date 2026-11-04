//https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool flag = true;

    for(int i = 1; i < s.size(); i++) {
        if(islower(s[i])) {
            flag = false;
            break;
        }
    }

    if(flag) {
        for(int i = 0; i < s.size(); i++) {
            if(isupper(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }

    cout << s;
}