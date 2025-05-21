#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n, k;
    cin >> n >> k;
    if (n == 1 and k == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if (k == 1 or k == n) {
        cout << -1 << endl;
        return;
    }

    if (k % 2 == 0) {
        cout << 3 << endl;
        cout << 1 << " " << k << " " << k+1 << endl; 
    } else {
        if (k == 2 or k == n-1) {
            cout << -1 << endl;
        } else {
            cout << 3 << endl;
            cout << 1 << " " << k-1 << " " << k+2 << endl;
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