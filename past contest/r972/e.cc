#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve() {
    int l, n, m;
    cin >> l >> n >> m;
    vi a(n);
    for (int i = 0; i < l; i++)
    {
        cin >> a[i];
    }
    
    vvi b(n, vi(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    vector<vector<vector<bool>>>dp(n,vector<vector<bool>>(m,vector<bool>(l, false)));

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = m-1; j >= 0; j--)
        {
            for (int k = 0; k < l; k++)
            {
                bool wins = false;
                if (i < n - 1) {
                    wins = wins or dp[i+1][j][k];
                }
                if (j < m-1) {
                    wins = wins or dp[i][j+1][k];
                }
                if (a[k] == b[i][j]) {
                    if (i == n-1 or j == m-1 or k == l-1) {
                        wins = true;
                    } else if (!dp[i+1][j+1][k+1]) {
                        wins = true;
                    }
                }
                dp[i][j][k] = wins;
            }
        }
    }

    if (dp[0][0][0]) {cout << "T" << endl;}
    else {cout << "N" << endl;}
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}