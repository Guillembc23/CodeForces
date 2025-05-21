#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back

void solve() {
  string x, y;
  cin >> x >> y;
  bool found = false;
  for (int i = 0; i < x.size(); i++) {
    if (found) {
      if (x[i] > y[i]) swap(x[i], y[i]);
    } else if (x[i] != y[i]) {
      if (x[i] < y[i]) swap(x[i], y[i]);
      found = true;
    }
  }
  cout << x << endl;
  cout << y << endl;
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