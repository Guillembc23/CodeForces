#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n;
    cin >> n;
    vvi g(n);
    vi deg(n,0);
    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].pb(y);
        g[y].pb(x);
        deg[x]++;
        deg[y]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (deg[i] == 0){
            deg[g[i][0]]--;
        }
    }
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {-deg[i],i};
    }
    sort(v.begin(),v.end());
    int C = min((int)(100),(int)(v.size()));
    int D = min((int)(10000),(int)(v.size()));
    int best = 0;
    for (int i = 0; i < C; i++)
    {
        for (int j = i+1; j < D; j++)
        {
            int curr = -v[i].first -v[j].first - 1;
            for (auto k : g[v[i].second]) {
                if (k == v[j].second) curr--;
            }
            best = max(best,curr);
        }
    }
    cout << best << endl;
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