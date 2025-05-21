#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    string s;
    cin >> s;
    bool found = false;
    for (int i = 0; i < s.size()-1; i++)
    {
        cout << s[i];
        if (not found and s[i] == s[i+1]) {
            if (s[i] == 'a') cout << 'b';
            else cout << 'a';
            found = true;
        }
    }
    cout << s[s.size()-1];
    if (not found) {
    if (s[s.size()-1] == 'a') cout << 'b';
    else cout << 'a';
    }
    cout << endl;
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