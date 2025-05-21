#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;

  ll x, y, aux, psum = 0;

  if (n == 1) {
    cin >> x;

    if (x > 0) {
      cout << x << endl;
    } else {
      cout << 0 << endl;
    }
  } else {
    cin >> x >> y;
    for (int i = 0; i < n - 2; i++) {
      cin >> aux;
      if (aux > 0) {
        psum += aux;
      }
    }

    if (x >= 0) {
      psum += x;
    } else if (y > 0 and x + y > 0) {
      psum += (x + y);
    }

    cout << psum << endl;
  }
}
//
//
//
int main() {
  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}