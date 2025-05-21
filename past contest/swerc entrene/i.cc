#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
const int INF = 1e9;

#define vi vector<int>
#define vvi vector<vi>

#define vs vector<short int>
#define vvs vector<vs>

void calc(int n, vi &dpn, vvs &dp) {
  int minnum = 1;
  int min = dpn[n - 1] + 1;

  for (int i = cbrt(n); i * i * i*min >= n; i--) {
    if (dpn[n - i * i * i] + 1 < min) {
      min = dpn[n - i * i * i] + 1;
      minnum = i;
      if(min == 1) {
        break;
      }
    }
  }
  dpn[n] = min;
  dp[n] = dp[n - minnum*minnum*minnum];
  dp[n].push_back(minnum);
}

//
//
//
void solve() {
  int n;
  cin >> n;

  vi dpn(n + 1);
  vvs dp(n + 1);
  dpn[0] = 0;
  dp[0] = {};

  for (int i = 1; i <= n; i++) {
    calc(i, dpn, dp);
  }

  cout << dpn[n] << endl;

  cout << dp[n][0];

  for(int i = 1; i < dpn[n]; i++) {
    cout << " " << dp[n][i];
  }
  cout << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}