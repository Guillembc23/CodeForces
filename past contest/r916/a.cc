#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

bool lower(char a) { return int(a) >= int('a') and int(a) <= int('z'); }

bool pos(string a, string b, string c, int n) {
  for (int i = 0; i < n; i++) {
    if (c[i] != a[i] and a[i] == b[i] and lower(c[i])) return true;

    if (c[i] != a[i] and c[i] != b[i]) return true;
  }
  return false;
}

void solve() {
  int n;
  cin >> n;
  string a, b, c;
  cin >> a >> b >> c;
  if (pos (a,b,c,n)) cout << "YES" << endl;
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