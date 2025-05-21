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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int plus = 0, minus = 0;
  for (int i = 0; i < n; i++)
  {
    if(s[i] == '+') plus++;
    else minus++;
  }
  cout << abs(plus-minus) << endl;
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