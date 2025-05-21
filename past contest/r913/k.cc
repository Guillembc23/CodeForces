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
int exp(int a) {
  if (a == 0)
    return 1;
  else if (a == 1)
    return 2;
  else
    return exp(a / 2) * exp(a - a / 2) % MOD;
}

int logg (int a) {
    if (a == 0) return -1;
    else return logg (a/2) + 1;
}

bool ssort (int a, int b) {return a > b;}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vi base;
  int b = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < b; j++) {
      if (logg(a[i]) == logg(base[j])) {
        a[i] = a[i] ^ base[j];
      }
    }

    if (a[i] == 0) {
      count++;
    } else {
      base.pb(a[i]);
      b++;
      sort(base.begin(), base.end(), ssort);
    }
  }
  cout << b << " " << count << endl;
  cout << (exp(b) * exp(count) * (exp(count) - 1) + 1)% MOD << endl;
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