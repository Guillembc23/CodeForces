#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int INF = 10e18;
const int MOD = 998244353;

struct query {
  int b;
  int x;
  int size;
};

void solve() {
  int n, qu;
  cin >> n >> qu;
  vector<query> q(n);
  cin >> q[0].b >> q[0].x;
  if (q[0].b == 1)
    q[0].size = 1;
  else
    q[0].size = 0;
  int m = 1;
  for (int i = 1; i < n; i++) {
    cin >> q[i].b >> q[i].x;
    if (q[i - 1].size < INF) {
        m++;
      if (q[i].b == 1)
        q[i].size = q[i - 1].size + 1;
      else
        q[i].size = (q[i].x + 1) * q[i - 1].size;
    } else
      q[i - 1].size = INF;
  }

  int k;
  for (int i = 0; i < qu; i++) {
    cin >> k;
    k--;
    int j = m - 1;
    while (j >= 0) {
      if (q[j].b == 1) {
        if (k == q[j].size - 1) {
          if (i > 0) cout << " ";
          cout << q[j].x;
          break;
        }
      } else {
        k %= q[j - 1].size;
      }

      j--;
    }
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