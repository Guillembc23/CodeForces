#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
    sort(a.begin(),a.end());
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        int count = min(a[i].second,m/a[i].first)*a[i].first;
        best = max(best, count);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if (a[i+1].first == a[i].first + 1) {
            int v = a[i].first;
            int x, y;
            x = min(a[i].second,m/a[i].first);
            y = min(a[i+1].second,(m - x*v)/a[i+1].first);
            int res = m - x*v - y*(v+1);
            res = min(res, min(x,a[i+1].second-y));
            int count = x*v + y*(v+1) + res;
            best = max(best, count);
        }
    }
    cout << best << endl;
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