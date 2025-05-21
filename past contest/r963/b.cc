#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    int n;
    cin >> n;
    vi pars;
    int ma = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            pars.push_back(x);
        } else {
            if (x > ma) ma = x;
        }
    }
    if (ma == -1) cout << 0 << endl;
    else {
        bool pos = true;
        sort(pars.begin(),pars.end());
        int ini = ma;
        for (int i = 0; i < pars.size(); i++)
        {
            if (ini < pars[i]) pos = false;
            ini += pars[i];
        }
        if (pos) cout << pars.size() << endl;
        else cout << pars.size() + 1 << endl;
    }
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