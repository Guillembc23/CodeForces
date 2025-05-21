#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n, c;
  cin >> n >> c;

  vector<ll> city(n), cocity(n);
  vector<bool> added(n, false);

  for (int i = 0; i < n; i++) {
    cin >> city[i];
    cocity[i] == (i+1)*c - city[i];
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