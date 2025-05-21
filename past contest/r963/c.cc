#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;


void solve () {
    int n, k;
    cin >> n >> k;
    vi a(n);
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > ma) ma = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] -= ma;
        a[i] %= 2*k;
        if (a[i] <= -k) a[i] += 2*k;
    }
    int c = 0, d = k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > c) c = a[i];
        if (a[i] + k < d) d = a[i] + k;
    }
    if (d <= c) cout << -1 << endl;
    else cout << c+ma << endl;
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