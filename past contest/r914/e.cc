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
const int INF = 1e18;

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/
bool right_pos(int x, vi &a, vi &b, int n) {
  int y = b[x];
  for (int i = x + 1; i < n; i++) {
    if (a[i] == y)
      return true;
    else if (b[i] < y or a[i] > y)
      return false;
  }
  return false;
}
bool left_pos(int x, vi &a, vi &b, int n) {
  int y = b[x];
  for (int i = x - 1; i >= 0; i--) {
    if (a[i] == y)
      return true;
    else if (b[i] < y or a[i] > y)
      return false;
  }
  return false;
}

void popa (int x, int y, vi &ta) {
    int z = x, w = y;
    while (z != w) {
        z /= 2;
        w /= 2;
    }
    int sol1 = 0, sol2 = 0;
    
}

void solve() {
  int n;
  cin >> n;
  int k = ceil(log2(n));
  vi a(k, 0), b(k, INF);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  vi ta (2*k), tb (2*k);
  for (int i = 2*k - 1; i > 0; i--)
  {
    if (i >= k) ta[i] = a[i - k];
    else {
        ta[i] = max (ta[2*i],ta[2*i +1]);
    }
  }
  for (int i = 2*k - 1; i > 0; i--)
  {
    if (i >= k) tb[i] = b[i - k];
    else {
        tb[i] = min (tb[2*i],tb[2*i +1]);
    }
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