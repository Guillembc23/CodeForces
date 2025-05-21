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

  bool sol = true;

  int k = 1;

  int x, y;

  for (int i = 0; i < n; i++) {
    if (i == k) {
      k *= 2;
      cin >> x;
    } else if (i == 0) {
      cin >> x;
    } else {
      y = x;
      cin >> x;
      if (x < y) {
        sol = false;
      }
    }
  }

  if (sol) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}