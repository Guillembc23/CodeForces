#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n>> m>>k;
    vvi a(m,vi(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>> a[j][i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        sort(a[i].begin(),a[i].end());
        reverse(a[i].begin(),a[i].end());
        for (int j = 1; j < n; j++)
        {
            a[i][j] += a[i][j-1];
        }
    }
    

    vvi dp(m+3,vi(m+3,0));
    for (int i = 0; i < n and k == 1; i++)
    {
        dp[0][i+1] = a[0][i];
    }
    
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < i-k+1; j++)
        {
            dp[i][j] = dp[i-1][j];
            for (int l = 1; l <= n and j-l >= 0; l++)
            {
                cout << i << " " << j << " " << l << endl;
                dp[i][j] = max(dp[i][j],dp[i-1][j-l] + a[i][l-1]);
            }
            cout << i << " " << j << " " << dp[i][j] << endl;
        }
    }
    cout << dp[m-1][m-k+1] << endl;
    
}

signed main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}