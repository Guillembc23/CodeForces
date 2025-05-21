#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
  int n;
  cin >> n;
  int x, y;
  int r = 0, l = 0, u = 0, d = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    if (x > 0)r++;
    else if (x < 0) l++;

    if (y > 0) u++;
    else if (y < 0) d++;
  }
  
  if (r == 0 or l == 0 or u == 0 or d == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}

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