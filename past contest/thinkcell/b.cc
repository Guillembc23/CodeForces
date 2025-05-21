#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define si set<int>
#define pb push_back
const int MOD = 998244353;


void solve() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << 1 << endl;
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