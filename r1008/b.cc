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
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << " ";
        if (i == n-1) cout << n-1;
        else if (i == n-2) cout << n;
        else if (k % 2 == 0) cout << n-1;
        else cout << n;
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