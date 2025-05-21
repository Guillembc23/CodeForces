#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int x = 0, y = 0;
  bool found = false;
  for (int i = 0; i < 100*n; i++)
  {
    if (s[i%n] == 'N') y++;
    if (s[i%n] == 'E') x++;
    if (s[i%n] == 'S') y--;
    if (s[i%n] == 'W') x--;
    if (x == a and y == b) found = true;
  }
  if (found) cout << "YES" << endl;
  else cout << "NO" << endl;
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