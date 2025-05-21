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

  ll sum = 0, x, mim;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x;
      sum += x;
      if (i + j == n - 1) {
        if (i == 0) {
          mim = x;
        } else {
          mim = min(x, mim);
        }
      }
    }
  }

  cout << sum - mim << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}