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
    vi a(n);
    bool pos = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < max(1+2*i,1+2*(n-1-i))) {
            pos = false;
        }
    }
    if (pos) cout << "YES" << endl;
    else cout << "NO" << endl;
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