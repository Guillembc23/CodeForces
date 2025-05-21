#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

void dfs(int u, vvi &g, vi &deg, vi &parent) {
  deg[u] = 0;
  for (auto v : g[u]) {
    if (deg[v] == -1) {
      dfs(v, g, deg, parent);
      parent[v] = u;
      deg[u]++;
    }
  }
}

void solve() {
  int n, c;
  cin >> n >> c;
  vi a(n);
  set<pair<int, int>> S;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    S.insert({a[i], i});
  }

  vvi g(n);
  vi parent(n);
  vi deg(n, -1);
  for (int i = 0; i < n - 1; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x].pb(y);
    g[y].pb(x);
  }
  dfs(0, g, deg, parent);
  queue<int> Q;
  for (int i = 0; i < n; i++) {
    if (deg[i] == 0) Q.push(i);
  }
  vvi dp(2, vi(n, 0));
  while (not Q.empty()) {
    int u = Q.front();
    Q.pop();
    dp[1][u] = a[u];
    for (auto v : g[u]) {
      dp[0][u] += max(dp[0][v], dp[1][v]);
      dp[1][u] += max(dp[0][v], dp[1][v] - 2 * c);
    }
    if (u == 0) break;
    deg[parent[u]]--;
    if (deg[parent[u]] == 0) Q.push(parent[u]);
  }
  cout << max(dp[0][0], dp[1][0]) << endl;
  ;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}