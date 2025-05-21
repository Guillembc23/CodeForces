#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int dfs (int u, vi &a, vector<bool> &vis) {
    if (vis[u]) return 0;
    else {
        vis[u] = true;
        return dfs(a[u],a,vis)+1;
    }
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    
    int tot = 0;
    vector<bool> vis(n,false);
    for (int i = 0; i < n; i++)
    {
        int b = dfs(i,a,vis);
        if (b % 2 == 0 and b > 0) tot += b/2-1;
        else tot += b/2;
    }
    cout << tot << endl;
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