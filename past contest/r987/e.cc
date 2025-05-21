#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

void rec(int u, vi &dp, vvi &g) {
    for (auto v : g[u])
    {
        rec(v,dp,g);
    }
    if (g[u].empty()) {
        dp[u] = 0;
        return;
    } else {
        priority_queue<int> Q;
        for (auto v : g[u])
        {
            Q.push(-dp[v]);
        }
        if (Q.size() == 1) {
            dp[u] = -Q.top()+1;
            return;
        }
        while (Q.size() > 1) {
            int x = -Q.top();
            Q.pop();
            int y = -Q.top();
            Q.pop();
            int z = max(x,y)+1;
            Q.push(-z);
        }
        dp[u] = -Q.top();
    }
}

void solve() {
    int n;
    cin >> n;
    vvi g(n);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        g[x].pb(i);
    }
    vi dp(n);
    rec(0,dp,g);
    cout << dp[0] << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}