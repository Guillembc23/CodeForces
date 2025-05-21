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

int gcdpos (int a, int b) {
    if (a == 0) return b;
    else if (b == 0) return a;
    else if (a > b) return gcdpos(a%b,b);
    else return gcdpos(a,b%a);
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  int x = 0, y = 0, w = 0;
  int k;
  cin >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > k) x++;
    else if (a[i] < k) y++;
    else w++;
  }
  if (x > 0 and y == 0 and w == 0) {
    int g = a[0] - k;
    for (int i = 1; i < n; i++)
    {
        g = gcd(g, a[i] - k);
    }
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        sol += a[i] - k;
    }
    if (g == 0) cout << 0 << endl;
    else cout << sol/g - n << endl;
  } else if (y > 0 and x == 0 and w == 0){
    int g =k - a[0];
    for (int i = 1; i < n; i++)
    {
        g = gcd(g, k-a[i]);
    }
    int sol = 0;
    g = -g;
    for (int i = 0; i < n; i++)
    {
        sol += a[i] - k;
    }
    if (g == 0) cout << 0 << endl;
    else cout << sol/g - n << endl;
  } else if ( x == 0 and y == 0) cout << 0 << endl;
  else cout << -1 << endl;
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