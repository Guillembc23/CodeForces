#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pp pair<int,int>


void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    vi b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b[i]--;
    }
    
    vi dis(n,-1);
    priority_queue<pair<int,int>> Q;
    Q.push({0,0});
    while (not Q.empty()) {
        int d = - Q.top().first;
        int v = Q.top().second;
        Q.pop();
        if (dis[v] == -1) {
            dis[v] = d;
            if(v > 0) Q.push({-d,v-1});
            Q.push({-d-a[v],b[v]});
        }
    }
    int best = 0;
    int acumulat = 0;
    for (int i = 0; i < n; i++)
    {
        acumulat += a[i];
        if (dis[i] != -1)best = max(best,acumulat-dis[i]);
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