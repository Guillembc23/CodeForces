#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;


void solve() {
  int n,k;
  cin >> n >> k;
  string s;
  for (int i = 0; i < k; i++)
  {
    s += char(i+int('a'));
  }
  for (int i = 0; i < n; i++)
  {
    cout << s;
  }
  cout << endl;
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