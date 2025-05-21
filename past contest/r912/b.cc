#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
#define vi vector<ll>
#define vvi vector<vi>
#define pb push_back

const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;
  vi a(n);

  ll x;
  bool pos = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x;
      if (i != j) {
        if ((j == 0 and i > 0) or (i == 0 and j == 1))
          a[i] = x;
        else
          a[i] = a[i] ^ x;
      }
    }
  }

  if (not pos) {
    cout << "NO" << endl;
    cout << a[0];
    for (int i = 1; i < n; i++) {
      cout << " " << a[i];
    }
    cout << endl;
  } else {
    cout << "YES" << endl;
    cout << a[0];
    for (int i = 1; i < n; i++) {
      cout << " " << a[i];
    }
    cout << endl;
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