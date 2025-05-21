#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vvi vector<vi>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vvi a(n, vi(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int l = 0;
      if (i > 0) l = max(a[i - 1][j], l);
      if (j > 0) l = max(a[i][j - 1], l);
      if (i < n - 1) l = max(a[i + 1][j], l);
      if (j < m - 1) l = max(a[i][j + 1], l);
      if (a[i][j] > l) a[i][j] = l;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (j > 0) cout << " ";
      cout << a[i][j];
    }
    cout << endl;
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