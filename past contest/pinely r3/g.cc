#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

struct go {
    int v, w;
}

void solve() {
  int n,m;
  cin >> n >> m;
  vi s(n);
  vector<go> a (n)
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    a[y-1][x-1] = 
  }
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