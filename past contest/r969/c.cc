#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

int gcd (int a, int b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else if (a > b) {
        return gcd(a%b,b);
    } else {
        return gcd(a,b%a);
    }
}

void solve () {
    int a, b, n;
    cin >> n >> a >> b;
    int g = gcd(a,b);
    set<int> S;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        S.insert(x%g);
    }
    int ma = 0;
    vi c;
    for (auto v : S) {
        c.push_back(v);
    }
    for (int i = 0; i < c.size()-1; i++)
    {
        if (ma < c[i+1] - c[i]) {
            ma = c[i+1] - c[i];
        }
    }
    if (ma < g + c[0] - c[c.size()-1]) {
            ma = g + c[0] - c[c.size()-1];
        }
    cout << g - ma << endl;
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