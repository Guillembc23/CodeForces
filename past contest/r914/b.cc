#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/

void solve() {
  int n;
  cin >> n;
  vi a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  vi b = a;
  sort(a.begin(), a.end());
  map<int, int> f;
  f[a[n - 1]] = n - 1;
  sum -= a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    if (sum >= a[i + 1])
      f[a[i]] = f[a[i + 1]];
    else
      f[a[i]] = i;
    sum -= a[i];
  }
  cout << f[b[0]];
  for (int i = 1; i < n; i++) {
    cout << " " << f[b[i]];
  }
  cout << endl;
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