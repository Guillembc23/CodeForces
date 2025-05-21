#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int MOD = 998244353;
vi dp(1e6,0);

void solve() {
    int n;
    cin >> n;
    int sol = 1 + n-2;
    for (int i = 2; i <= n; i++)
    {
        sol += dp[i];
        sol %= MOD;
    }
    cout << sol << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int count = 0;
  for (int i = 4; i <= 1e6; i++)
  {
    dp[i] = (i-1)*(i-2)/2 - 1 + count;
    count += i*dp[i];
    count %= MOD;
  }
  

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}