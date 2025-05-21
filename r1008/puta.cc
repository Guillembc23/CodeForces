#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    vi a(24);
    vi b(24);

    a[0] = 1;
    b[0] = 0;

    for (int i = 1; i < 24; i++)
    {
        a[i] = 3*a[i-1] + b[i-1];
        b[i] = 2*a[i-1] + b[i-1];
    }
    cout << a[23] << endl;
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
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}