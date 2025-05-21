#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
  int n;
  while (cin >> n) {
    int c, p;
    cin >> c >> p;
    int ma = c/p;
    c = c - (p-1)*n;
    if (c < 0) c = 0;
    int mi = ceil(1.0*c/p);
    cout << mi << " " << ma << endl;
  }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}