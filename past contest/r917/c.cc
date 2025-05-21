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

void solve() {
  int n, k, d;
  cin >> n >> k >> d;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vi b(k);
  for (int i = 0; i < k; i++) {
    cin >> b[i];
  }

  int tot = min(d - 1, 2 * n);

  int maxi = 0;
  for (int j = 0; j < n; j++) {
      if (a[j] == j + 1) maxi++;
}
maxi += (d-1)/2;

  for (int i = 0; i < tot; i++) {
    int curr = 0;
    for (int j = 0; j < n; j++) {
      if (j+1 <= b[i % k]) a[j]++;
      if (a[j] == j + 1) curr++;
      }
      maxi = max(maxi, curr + (d-2-i)/2);
  }
  cout << maxi << endl;
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