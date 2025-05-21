#include <bits/stdc++.h>
#define endl "\n"
//#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve() {
  int m, n;
  cin >> n >> m;
  int zeros = 0;
  vi a, b;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (c == 0)
      zeros++;
    else {
      a.push_back(zeros);
      zeros = 0;
      b.push_back(c);
    }
  }
  int k = a.size();
  vi aa = a;
  for (int i = 1; i < k; i++) {
    aa[i] += aa[i - 1];
  }

  vvi dp(k, vi(m, 0));
  // maxim fer fins a k amb inteligencia m

  int ma = 0;

  for (int j = 0; j <= aa[0]; j++) {
    for (int l = max(j - a[0],0); l <= j; l++) {
      if (b[0] > 0) {
        if (l >= b[0]) {
          dp[0][j] = max(1.0*dp[0][j], 1.0);
        } else {
          dp[0][j] = max(1.0*dp[0][j], 0.0);
        }
      } else {
        if (aa[0] - l >= -b[0]) {
          dp[0][j] = max(1.0*dp[0][j], 1.0);
        } else {
          dp[0][j] = max(1.0*dp[0][j], 0.0);
        }
      }
      ma = max(ma,dp[0][j]);
      cout << 0 << " " << j << " " << aa[0] - j << " " << dp[0][j] << endl;
    }
  }


  for (int i = 1; i < k; i++) {
    for (int j = 0; j <= aa[i]; j++) {
      for (int l = 0; l <= a[i]; l++) {
        if (b[i] > 0) {
          if (l >= b[i]) {
            dp[i][j] = max(dp[i][j], dp[i - 1][l] + 1);
          } else {
            dp[i][j] = max(dp[i][j], dp[i - 1][l]);
          }
        } else {
          if (aa[i] - l >= -b[i]) {
            dp[i][j] = max(dp[i][j], dp[i - 1][aa[i] - l] + 1);
          } else {
            dp[i][j] = max(dp[i][j], dp[i - 1][aa[i] - l]);
          }
        }
      }
      ma = max(ma,dp[i][j]);
      cout << i << " " << j << " " << aa[i] - j << " " << dp[i][j] << endl;
    }
  }
  cout << ma << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
}