#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

void solve() {
  int n, m;
  while (cin >> n >> m) {
    vi a(n, -1);
    vi indeg(n, 0);
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      a[y - 1] = a[x - 1];
    }
    stack<int> visit;
    for (int i = 0; i < n; i++) {
      if (indeg[i] == 0) visit.push(i);
    }
    cout << "NICE" << endl;
    int count = 0;
    while (not visit.empty()) {
        count++;
      int v = visit.top();
      if (a[v] > 0) {
      indeg[a[v]]--;
      if (indeg[a[v]] == 0) visit.push(a[v]);
      }
      visit.pop();
    }
    cout << n - count << endl;
  }
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
 //ios_base::sync_with_stdio(0);
 // cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}