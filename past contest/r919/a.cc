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
  int n;
  cin >> n;
  int a = 0, b = 10e9;
  vi notper;
  int type, x;
  for (int i = 0; i < n; i++)
  {
    cin >> type >> x;
    if (type == 1) {
        a = max(a, x);
    } else if (type == 2) {
        b = min(b, x);
    } else {
        notper.pb(x);
    }
  }
  int res = b - a + 1;
  if (res < 0) res = 0;
  for (int i = 0; i < notper.size(); i++)
  {
    if (a <= notper[i] and notper[i] <= b) res--;
  }
  cout << res << endl;
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