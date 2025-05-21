#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//

void solve() {
  int n, k;
  cin >> n >> k;
  int a = n;
  int i = k;
  
  while (a > 0 and i > 0) {
    a /= 2;
    i--;
  }

  if (a == 0) {
    cout << n + 1 << endl;
  } else {
    cout << (1 << k) << endl;
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