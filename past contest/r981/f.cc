#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int MOD = 1e9+7;


void solve() {
    int n, k;
    cin >> n >> k;
    n %= MOD;
    int per = 1;
    int x = 0, y = 1;
    y %= k;
    while (y != 0) {
        int z = y;
        int w = (x + y )% k;
        per++;
        x = z;
        y = w;
    }
    cout << (n*per)%MOD << endl;
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