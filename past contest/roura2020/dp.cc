#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define int long long

using namespace std;

bool dfs(int u, vector<vector<pair<int, int>>> &g, vector<int> &sol,
         vector<bool> &vis) {
  int n = g.size();
  if (u == n-1) return true;
  for (auto v : g[u]) {
    if (not vis[v.second]) {
      if (dfs(v.second, g, sol, vis)) {
        sol.push_back(v.first);
        return true;
      }
    }
  }
  vis[u] = true;
  return false;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  while (cin >> n >> m) {
    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < m; i++) {
      int x, y, c;
      cin >> x >> y >> c;
      g[x].push_back({c, y});
    }
    for (int i = 0; i < n; i++)
    {
        sort(g[i].begin(),g[i].end());
    }
    

    vi sol;
    vector<bool> vis(n, false);
    if (dfs(0, g, sol, vis)) {
      bool first = true;
      for (int i = sol.size() - 1; i >= 0; i--) {
        if (first)
          first = false;
        else
          cout << " ";
        cout << sol[i];
      }
      cout << endl;
    } else {
      cout << -1 << endl;
    }
  }
}