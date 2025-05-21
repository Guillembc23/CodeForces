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

void print(vvi a) {
  int n = a.size();
  int m = a[0].size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (j > 0) cout << " ";
      cout << a[i][j];
    }
    cout << endl;
  }
  cout << endl;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vvi dp(n + 1, vi(n + 1, 0));
  dp[0][0] = 1;
  dp[1][1] = 1;

  for (int i = 2; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      for (int p = 0; p < k and j + 2 * p + 1 <= n; p++) {
        dp[i][j + 2 * p + 1] += dp[i - 1][j];
        dp[i][j + 2 * p + 1] %= MOD;
      }
    }
  }

  print(dp);

  cout << "nice" << endl;
  int sum = 0;

  for (int j = 0; j < k; j++) {
    for (int l = 0; l < k; l++) {
        if (l + j + 1 <= k and (l+1)*(j+1) == n) {
        sum += 1;
        sum %= MOD;
        }
    }
  }

  for (int i = 2; i <= n; i++) {
    for (int j = 0; j < k; j++) {
      for (int l = 0; l < k; l++) {
        if (n - j - l >= 0) {
          sum += dp[i][n - j - l];
          sum %= MOD;
        }
      }
    }
  }
  cout << sum << endl;
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