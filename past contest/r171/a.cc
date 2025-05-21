#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    int a = min(x,y);
    cout << 0 << " " << 0 << " " << a << " " << a << endl;
    cout << 0 << " " << a << " " << a << " " << 0 << endl;
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