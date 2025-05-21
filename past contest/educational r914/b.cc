#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back

void solve() {
  int n;
  cin >> n;
  vi a(n);
  vi pos;
  pos.pb(-1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] != a[0]) {
      pos.pb(i);
    }
  }
  pos.pb(n);
  int sol = 1e9;
  for (int i = 1; i < pos.size(); i++)
  {
    sol = min(sol,pos[i]-pos[i-1]-1);
  }
  if (sol >= a.size()) sol = -1;
  cout << sol << endl;
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