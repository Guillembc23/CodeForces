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

  int x, y, xx = 0, yy = 0;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;

    if (i == 0) {
      x = k;
      xx++;
    } else if (k != x and yy == 0) {
      y = k;
      yy++;
    } else if (k == x) {
      xx++;
    } else if (k == y) {
      yy++;
    }
  }

  if ((xx + yy == n and abs(xx - yy) < 2) or yy == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
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