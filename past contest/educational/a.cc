#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//

void solve() {
    int n;
    cin >> n;
    char a;
    bool pos = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == '0') pos = true;
    }

    if (pos) cout << "YES"  << endl;
    else cout << "NO" << endl;
}
//
//
//

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}