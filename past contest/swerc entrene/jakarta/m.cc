#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;
  vi a(n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }

  bool dobl = false;
  int big = 0;
  for (int i = 0; i < n; i++) {
    if (3 * a[i] >= 2 * total) {
      dobl = true;
      big = a[i];
    }
  }

  if (dobl)
    cout << total - big << endl;
  else
    cout << total / 3 << endl;
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
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}