#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool x = true, y = true;
    for (int i = 0; i < n; i++)
    {
        x = x and (a[i] == b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        y = y and (a[i] == b[n - 1 - i]);
    }

    if (x or y) cout << "Bob" << endl;
    else cout << "Alice" << endl;
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