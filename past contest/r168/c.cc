#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dif = 0;
    for (int i = 2; i < n; i += 2)
    {
        if (s[i-1] == '(') s[i] = ')';
    }

    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == '_') s[i] = '(';
    }
    
    int count = 0;
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(') count++;
        else count--;
        sol += count;
    }
    cout << sol << endl;
}

signed main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}