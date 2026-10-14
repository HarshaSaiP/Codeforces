//https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.rbegin(), a.rend());

    int s = 0, count = 0;

    for(int i = 0; i < n; i++) {
        s += a[i];
        count++;

        if(s > sum - s) {
            break;
        }
    }

    cout << count;
}