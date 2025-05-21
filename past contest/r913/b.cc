#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//
bool mic(char a) { return int(a) <= int('z') and int(a) >= int('a'); }

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  string s1 = "", s2 = "";
  int b = 0, B = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (mic(s[i])) {
      if (s[i] == 'b')
        b++;
      else if (b > 0)
        b--;
      else
        s1 += s[i];
    } else {
      if (s[i] == 'B')
        B++;
      else if (B > 0)
        B--;
      else
        s1 += s[i];
    }
  }

  int m = s1.size();
  for (int i = m - 1; i >= 0; i--) {
    s2 += s1[i];
  }
  cout << s2 << endl;
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