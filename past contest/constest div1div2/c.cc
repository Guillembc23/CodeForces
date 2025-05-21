#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    int a, b, c, d;
    int n;
    cin >> n;
    vi x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    cin >> a >> b >> c >> d;
    int dist = (a-c)*(a-c) + (b-d)*(b-d);
    for (int i = 0; i < n; i++)
    {
        if ((x[i] - c)* (x[i]-c) + (y[i] - d)* (y[i]-d) <= dist ) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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