#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;

  int plus = 0, minus = 0;

  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (c == '+') {
      plus++;
    } else {
      minus++;
    }
  }

  int tot = plus - minus;

  int q;

  cin >> q;

  for (int i = 0; i < q; i++) {
    ll a, b;

    cin >> a >> b;
    bool cond;
    if (tot == 0) {
      cond = true;
    } else if (a == b) {
      cond = false;
    } else {
      cond = (tot * b % abs(b - a) == 0) and tot * b / (b - a) >= -minus and
             tot * b / (b - a) <= plus;
    }

    if (cond) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}