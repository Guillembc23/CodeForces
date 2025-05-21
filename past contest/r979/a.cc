#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n;
    cin >> n;
    int ma = 0;
    int mi = 1e9;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        ma = max(c,ma);
        mi = min(c,mi);
    }
    cout << (n-1)*(ma-mi) << endl;
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