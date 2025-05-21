#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

void dfs(int u, vvi &g, vi &parent) {
    for (auto v : g[u]) {
        if(parent[v] == -1) {
            parent[v] = u;
            dfs(v,g,parent);}
    }
} 

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i].second = i;
        cin >> a[i].first;
        a[i].first = -a[i].first;
    }
    sort(a.begin(),a.end());
    
    vvi g(n);
    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].pb(y);
        g[y].pb(x);
    }
    vi parent(n,-1);
    parent[0] = 0;
    dfs(0,g,parent);
    
    int curr = a[j].second;
    while (true) {
        if (k == 0) break;
        k = parent[k];
    }
    cout << curr+1 << endl;
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