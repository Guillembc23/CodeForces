#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define pb push_back

using namespace std;

vector<pair<int, int>> adjacent(int x, int y, int n, int m) {
  vector<pair<int, int>> res;
  if (0 < y) res.pb({x, y - 1});
  if (y < m - 1) res.pb({x, y + 1});
  if (0 < x) {
    res.pb({x - 1, y});
    if (x % 2 == 1 and y < m-1)res.pb({x - 1, y+1});
    if (x % 2 == 0 and y > 0)res.pb({x - 1, y-1});
  }
  if (x < n - 1) {
    res.pb({x + 1, y});
    if (x % 2 == 1 and y < m-1)res.pb({x + 1, y+1});
    if (x % 2 == 0 and y > 0)res.pb({x + 1, y-1});
  }
  return res;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vvi dp(n, vi(m, 0));
  vvi tab(n, vi(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if (c == '#')
        tab[i][j] = 1;
      else
        tab[i][j] = 0;
    }
  }

  vvb vis(n, vb(m, false));

  priority_queue<pair<int, pair<int, int>>> Q;
  for (int i = 0; i < m; i++) {
    Q.push({-1+tab[0][i], {0, i}});
  }

  while (not Q.empty()) {
    int v = -Q.top().first;
    int x = Q.top().second.first;
    int y = Q.top().second.second;
    Q.pop();
    if (not vis[x][y]) {
      vis[x][y] = true;
      if (x == n-1) {
        cout << v << endl;
        return;
      }
      for (auto u : adjacent(x,y,n,m)) {
        if (not vis[u.first][u.second]) {
        if (tab[u.first][u.second] == 0) Q.push({-v-1,u});
        else Q.push({-v,u});
        }
      }
    }
  }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  int tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
}