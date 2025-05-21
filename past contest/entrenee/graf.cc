#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define int long long
using namespace std;


void solve() {
    int n;
    cin >> n;
    vvi a(n);
    vi deg(n,0);
    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    queue<int> Q;
    vector<bool> vis(n,false);
    
    for (int i = 0; i < n; i++)
    {
        if (deg[i] == 1) {
            Q.push(i);
        }
    }

    int total = 0;
    
    while (not Q.empty()) {
        int v = Q.front();
        Q.pop();
        if (not vis[v]) {
            int u;
            for (auto p : a[v]) {
                if (not vis[p]) {
                    u = p;
                    break;
                }
            }
            
            total++;
            vis[u] = true;

            if (deg[u] > 2) {
            for (auto p : a[u]) {
                if (not vis[p] and deg[p] == 1) {
                    vis[p] = true;
                }
            }
            }
        }
    }
}

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}