#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

typedef long long int ll;
const int MOD = 998244353;
//
//
//
void dfs(int v, vvi &graph, vi &tree, vi &value, vector<bool> &visited) {
  visited[v] = true;
  for (auto x : graph[v]) {
    if (not visited[x]) {
      dfs(x, graph, tree, value, visited);
      tree[x] = v;
      value[v] += value[x];
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  vvi graph(n);
  vi dfstree(n);
  vi value(n, 0);
  vector<bool> visited(n, false);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    graph[x - 1].pb(y - 1);
    graph[y - 1].pb(x - 1);
  }
  dfstree[0] = 0;
  visited[0] = true;
  dfs(0, graph, dfstree, value, visited);
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}