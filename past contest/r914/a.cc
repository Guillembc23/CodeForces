#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
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

void solve() {
  int a, b, x1, y1, x2, y2;
  cin >> a >> b >> x1 >> y1 >> x2 >> y2;
  if (abs(x1 - x2) == 2 * a and abs(y1 - y2) == 2 * b) {
    cout << 1 << endl;
  } else if (abs(x1 - x2) == 2 * b and abs(y1 - y2) == 2 * a) {
    cout << 1 << endl;
  } else if (abs(x1 - x2) == 0 and abs(y1 - y2) == 2 * a) {
    cout << 2 << endl;
  } else if (abs(x1 - x2) == 0 and abs(y1 - y2) == 2 * b) {
    cout << 2 << endl;
  } else if (abs(x1 - x2) == 2 * a and abs(y1 - y2) == 0) {
    cout << 2 << endl;
  } else if (abs(x1 - x2) == 2 * b and abs(y1 - y2) == 0) {
    cout << 2 << endl;
  } else if (abs(x1 - x2) == a + b and abs(y1 - y2) == a + b) {
    cout << 2 << endl;
  } else if (abs(x1 - x2) == abs(a - b) and abs(y1 - y2) == a + b) {
    cout << 2 << endl;
  } else if (abs(x1 - x2) == a + b and abs(y1 - y2) == abs(a - b)) {
    cout << 2 << endl;
  } else if (abs(x1 - x2) == abs(a - b) and abs(y1 - y2) == abs(a - b)) {
    cout << 2 << endl;
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