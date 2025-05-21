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
  int n, k;
  cin >> n >> k;
  int a = -1, b = -1;

  for (int i = 0; i < n and n * i <= k; i++) {
    if ((k - n * i) % (n - 2*i) == 0) {
      a = i;
      b = (k - n * i) / (n - 2*i);
      break;
    }
  }
  if (a == -1)
    cout << "No" << endl;
  else {
    cout << "Yes" << endl;
    vvi table(n, vi(n, 0));
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < n; j++) {
        table[j][(i + j) % n] = (table[j][(i + j) % n] + 1) % 2;
      }
    }
    for (int i = 0; i < b; i++) {
      for (int j = 0; j < n; j++) {
        table[j][(i + n - j) % n] = (table[j][(i + n - j) % n] + 1) % 2;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << table[i][0];
      for (int j = 1; j < n; j++) {
        cout << " " << table[i][j];
      }
      cout << endl;
    }
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