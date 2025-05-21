#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void put (pair<int,int> p,stack<pair<int,int>> &a) {
    while (not a.empty() and a.top().first*p.second >= p.first*a.top().second  ) {
        p.first += a.top().first;
        p.second += a.top().second;
        a.pop();
    }
    a.push(p);
}

void solve() {
    int n;
    cin >> n;
    stack<pair<int,int>> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        put ({x,1},a);
    }
    double ma = 0, mi = 1e12;
    while (not a.empty()) {
        ma = max(ma, 1.0*a.top().first/a.top().second);
        mi = min(mi, 1.0*a.top().first/a.top().second);
        a.pop();
    }
    cout << ceil(ma) - floor(mi) << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}