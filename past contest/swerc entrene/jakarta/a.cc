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
bool dis(int a, int b) {
  return abs(a % 3 - b % 3) < 2 and abs(a / 3 - b / 3) < 2;
}

void solve() {
  vector<char> a(9);
  for (int i = 0; i < 9; i++) cin >> a[i];
  string sol = "CCC";
  string s = "";
  for (int i = 0; i < 9; i++) {
    s += a[i];
    for (int j = 0; j < 9; j++) {
      s += a[j];
      for (int k = 0; k < 9; k++) {
        s += a[k];
        if (dis(i, j) and dis(j, k) and i != j and j != k and k != i) {
          if (s < sol) sol = s;
        }
        s.pop_back();
      }
      s.pop_back();
    }
    s.pop_back();
  }

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
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}