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
  int n, p, l, t;
  cin >> n >> p >> l >> t;
  int k = (n - 1) / 7 + 1;
  int points = k / 2 * (l + 2 * t);
  int days = ceil(1.0 * p / (l + 2 * t));
  if (points >= p) {
    cout << n - days << endl;
  } else {
    days = k / 2;
    if (k % 2 == 1) {
      days++;
      points += l + t;
    }
    if (points >= p) {
      cout << n - days << endl;

    } else {
      cout << n - days - ceil(1.0 * (p - points) / l) << endl;
    }
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