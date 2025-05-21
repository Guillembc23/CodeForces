#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/

bool sorted(string s, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (s[i] > s[i + 1]) return false;
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vi a;
  char last = s[n - 1];
  int count = 0;
  int res = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] >= last) {
      a.pb(i);
      count++;
      if (s[i] > last) {
        res += count -1;
        count = 1;
      }
      last = s[i];
    }
  }
  for (int i = 0; i < a.size() / 2; i++) {
    swap(s[a[i]], s[a[a.size() - 1 - i]]);
  }
  if (sorted(s, n))
    cout << res << endl;
  else
    cout << -1 << endl;
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