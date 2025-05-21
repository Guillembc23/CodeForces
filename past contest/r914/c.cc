#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;


void solve() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  cin >> a[0];
  int mi = a[0];
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    mi = min(mi, a[i]);
  }

  if (k >= 3) {
    cout << 0 << endl;
  } else {
    sort(a.begin(), a.end());
    int sol = mi;
    for (int i = 1; i < n; i++) {
      sol = min(sol, abs(a[i] - a[i - 1]));
    }
    if (k == 1) {
      cout << sol << endl;
    } else {
      for (int i = n - 1; i >= 0; i--) {
        int j = 0;
        int l = n - 1;
        while (l > j) {
          sol = min(sol, abs(a[i] - a[l] - a[j]));
          if (a[i] > a[l] + a[j]) {
            j++;
          } else {
            l--;
          }
        }
      }
      cout << sol << endl;
    }
  }
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}