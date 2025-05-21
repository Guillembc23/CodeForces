#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vc vector<char>
#define vvc vector<vc>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vvc a(2, vc(n + 2));
  a[0][0] = 'x';
  a[1][0] = 'x';
  a[0][n + 1] = 'x';
  a[1][n + 1] = 'x';

  bool empty = true;
  for (int i = 0; i < n; i++) {
    cin >> a[0][i + 1];
    if (a[0][i + 1] == '.') empty = false;
  }
  for (int i = 0; i < n; i++) {
    cin >> a[1][i + 1];
    if (a[1][i + 1] == '.') empty = false;
  }
  if (empty)
    cout << 0 << endl;
  else {
    int sol = 0;
    for (int i = 0; i < n; i++) {
      if (a[0][i-1] == '.' and a[0][i] == '.' and a[0][i+1] == '.' and
          a[1][i-1] == 'x' and a[1][i] == '.' and a[1][i+1] == 'x')
        sol++;
    }
    for (int i = 0; i < n; i++) {
      if (a[0][i-1] == 'x' and a[0][i] == '.' and a[0][i+1] == 'x' and
          a[1][i-1] == '.' and a[1][i] == '.' and a[1][i+1] == '.')
        sol++;
    }
    cout << sol << endl;
  }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}