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

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/
bool right_pos(int x, vi &a, vi &b, int n) {
  int y = b[x];
  for (int i = x + 1; i < n; i++) {
    if (a[i] == y)
      return true;
    else if (b[i] < y or a[i] > y)
      return false;
  }
  return false;
}
bool left_pos(int x, vi &a, vi &b, int n) {
  int y = b[x];
  for (int i = x - 1; i >= 0; i--) {
    if (a[i] == y)
      return true;
    else if (b[i] < y or a[i] > y)
      return false;
  }
  return false;
}

void solve() {
  int n;
  cin >> n;
  vi a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  bool sol = true;
  for (int i = 0; i < n; i++) {
    sol = sol and b[i] >= a[i];
  }
  for (int i = 0; i < n; i++) {
    sol =
        sol and (right_pos(i, a, b, n) or left_pos(i, a, b, n) or a[i] == b[i]);
    if (not sol) {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
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