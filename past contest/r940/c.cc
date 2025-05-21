#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 1e9 + 7;
const int siz = 3 * 1e5 + 1;
int a[siz];

void solve() {
  int n, k;
  cin >> n >> k;
  int oc = 0;
  while (k--) {
    int x, y;
    cin >> x >> y;
    if (x == y)
      oc++;
    else
      oc += 2;
  }
  int m = n - oc;
  cout << a[m] << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  a[0] = 1;
  a[1] = 1;

  for (int i = 2; i <= siz; i++) {
    a[i] = (a[i - 2] * (i - 1) * 2 + a[i - 1]) % MOD;
  }

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}