#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    vi b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0) a[i] += a[i-1];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    
    vvi dp(m+1,vi(n+1,-1));
    priority_queue<pair<int,pair<int,int>>> Q;
    Q.push({0,{0,0}});

    while (not Q.empty()) {
        int cost = -Q.top().first;
        int step = Q.top().second.first;
        int len = Q.top().second.second;
    }

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