#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vvvvi vector<vvvi>
#define pb push_back
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  vvi dp(1e4+1,vi(2,0));
  dp[1][0] = 1;
  dp[0][1] = 1;
  for (int i = 2; i < 1e4+1; i++)
  {
    dp[i][0] = dp[i-1][1];
    for (int j = 1; j <= i-1; j++)
    {
        dp[i][1] += (dp[j][0] + dp[j][1])*dp[i-j-1][1];
        dp[i][1] %= MOD;
    }
  }
  int n;
  while (cin >> n) {
    cout << dp[n][0] + dp[n][1] << endl;
  }
}