#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

void bfs(int u, int v, vi &dis, vi &maxx, vvi &g) {
  dis[v] = dis[u] + 1;
  for (auto w : g[v]) {
    if (w != u) {
      bfs(v, w, dis,maxx, g);
      maxx[v] = max(maxx[v],maxx[w]);
    }
  }
  if (maxx[v] < 0) maxx[v] = dis[v];
}

void solve() {
  int n;
  cin >> n;
  vvi g(n);
  for (int i = 0; i < n - 1; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x].pb(y);
    g[y].pb(x);
  }
  vi dis(n, -1);
  vi maxx(n, -1);
  bfs(0, 0, dis, maxx, g);
  for (int i = 0; i < n; i++)
  {
    //cout << i << " " << dis[i] << " " << maxx[i] << endl;
  }
  


  vector<pair<int,int>> V;
  for (int i = 1; i < n; i++)
  {
    V.pb({dis[i],0});
    V.pb({maxx[i] ,1});
  }
  sort(V.begin(),V.end());
  int d = 1;
  int maxd = 1;
  for (int i = 0; i < V.size(); i++)
  {
    if (V[i].second == 0) d++;
    else d--;
    maxd = max(maxd,d);
  }
  cout << n - maxd << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}