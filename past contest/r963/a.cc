#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    int n;
    string s;
    cin >> n >> s;
    int a =0 , b = 0, c =0 , d= 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' ) a++;
        if (s[i] == 'B' ) b++;
        if (s[i] == 'C' ) c++;
        if (s[i] == 'D' ) d++;
    }
    int sol = 0;
    sol += min(a,n);
    sol += min(b,n);
    sol += min(c,n);
    sol += min(d,n);
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