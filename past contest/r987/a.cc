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
    int x = -1;
    int curr = 0;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        if (y != x) {
            curr = 1;
            x = y;
        } else curr++;
        ma = max(curr,ma);
    }
    cout << n - ma << endl;
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