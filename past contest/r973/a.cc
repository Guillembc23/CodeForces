#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve() {
    int n, x, y;
    cin  >> n >> x >> y;
    cout << max(int(ceil(1.0*n/x)), int(ceil(1.0*n/y))) << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}