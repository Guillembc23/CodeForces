#include <bits/stdc++.h>
#define vi vector<int>
#define int long long
using namespace std;

void solve() {
  int a, b, n;
  cin >> n >> a >> b;

  if (a > b) {
    cout << n*a << endl;
  }
  else if (b - a <= n) {
    cout << (b + a + 1) * (b - a) / 2 + (n - b + a) * a << endl;
  } else {
    cout << (2 * b - n + 1) * n / 2 << endl;
  }
}

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}