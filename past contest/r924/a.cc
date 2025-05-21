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
  int a, b;
  cin >> a >> b;
  if (a % 2 == 0 and 2*b != a) cout << "Yes" << endl;
  else if (b % 2 == 0 and 2*a != b) cout << "Yes" << endl;
  else cout << "No" << endl;
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