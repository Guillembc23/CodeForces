#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//
int gcd(int a, int b) {
  if (a == 0)
    return b;
  else if (b == 0)
    return a;
  else if (a > b)
    return gcd(a % b, b);
  else
    return gcd(a, b % a);
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  if (n == 1)
    cout << 1 << endl;
  else {
    int g = a[1] - a[0];
    for (int i = 1; i < n - 1; i++) {
      g = gcd(g, a[i + 1] - a[i]);
    }
    int tot = 0;
    int low = a[n - 1] - g;
    for (int i = n - 2; i >= 0; i--) {
      if (low == a[i]) low -= g;
      tot += (a[n - 1] - a[i]) / g;
    }
    cout << tot + min(n, (a[n - 1] - low) / g) << endl;
  }
}
//
//
//

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}