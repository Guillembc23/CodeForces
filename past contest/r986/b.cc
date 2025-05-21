#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
  int n, b, c;
  cin >> n >> b >> c;
  if (b > 0) {
    int i = ceil(1.0*(n-c)/b);
    if (i < 0) i = 0;
    cout << n - i << endl;
  } else {
    if (c > n-1) cout << n << endl;
    else if (c >= n-2) cout << n-1 << endl;
    else cout << -1 << endl;
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