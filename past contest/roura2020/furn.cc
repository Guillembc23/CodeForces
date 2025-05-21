#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define int long long
const int INF = 1e12;

using namespace std;


signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, k;
  while (cin >> n >> m >> k) {
    vector<vector<pair<int,int>>> g(n);

    for (int i = 0; i < m; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        g[x].push_back({y,c});
        g[y].push_back({x,c});
    }
    vi furn(n,0);
    int furnn = 0;

    for (int i = 0; i < k; i++)
    {
        int x, w;
        cin >> x >> w;
        furn[x] = w;
        furnn++;
    }
    
    vi c(n,0);
    for (int i = 0; i < n; i++)
    {
        if (furn[i]) c[i] = INF;
    }
    
    priority_queue<pair<int,int>> Q;
    for (int i = 0; i < n; i++)
    {
        if (furn[i]) {
            int mi = INF;
            for (auto v : g[i]) {
                if (not furn[v.first]) {
                    mi = min(mi,v.second);
                }
            }
            if (mi < INF) {
                Q.push({ -mi*furn[i],i});
            }
        }
    }

    vector<bool> vis(n,false);
    
    while (not Q.empty() and furnn > 0) {
        int cc = -Q.top().first;
        int u = Q.top().second;
        Q.pop();
        if (not vis[u]) {
            vis[u] = true;
            furnn--;
            c[u] = cc;

            for (auto v : g[u])
            {
                if (furn[v.first] and not vis[v.first]) {
                    Q.push({-c[u]-v.second*furn[v.first],v.first});
                }
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (furn[i]) {
            cout << i << " : " << c[i] << endl;
        }
    }
    cout << "----------" << endl;
  }
}