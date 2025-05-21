#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

void dfs(int u, int v, vvi &g, vi &l, vi &xors, int &sum) {
  xors[v] = xors[u]^l[v];
  for (auto w : g[v])
  {
    if (w != u) dfs(v,w,g,l,xors,sum);
  }
  if (g[v].size() == 1 and v != 0) sum += xors[v];
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  while (cin >> n) {
    vi l(n);
    for (int i = 0; i < n; i++) {
      cin >> l[i];
    }
    vvi g(n);

    for (int i = 0; i < n - 1; i++) {
      int x, y;
      cin >> x >> y;
      x--;
      y--;
      g[x].pb(y);
      g[y].pb(x);
    }

    vi xors(n, 0);
    int sum = 0;
    dfs(0,0,g,l,xors,sum);
    cout << sum << endl;
  }
}