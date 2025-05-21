#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

void solve() {
  int n, x;
  cin >> n >> x;
  int a, b;
  if ((n + x) % 2 == 0) {
    a = (n - x) / 2;
    b = (n + x - 2) / 2;
    set<int> s;
    for (int i = 1; i * i <= a; i++) {
      if (a % i == 0) {
        if (i+1 >= x) s.insert(i);
        if (a/i+1 >= x) s.insert(a/i);
      }
    }
    for (int i = 1; i * i <= b; i++) {
      if (b % i == 0) {
        if (i+1 >= x) s.insert(i);
        if (b/i+1 >= x) s.insert(b/i);
      }
    }
    cout << s.size() << endl;
  } else {
    cout << 0 << endl;
  }
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
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}