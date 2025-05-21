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

void solve() {
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  int p1 = 0, p2 = 0;
  for (int i = 0; i < n; i++) {
    if (s1[i] == '1' and i % 2 == 0) {
      p1++;
      p1 %= 2;
    }
  }
  for (int i = 0; i < n; i++) {
    if (s2[i] == '1' and i % 2 == 0) {
      p2++;
      p2 %= 2;
    }
  }

  if ((n%2 == 1) and (p1 != p2)) cout << "NO" << endl;
  else cout << "YES" << endl;
  // //
}
//
//
//

signed main() {
  //cout.setf(ios::fixed);
  //cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}