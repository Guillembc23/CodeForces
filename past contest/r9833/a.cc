#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n;
    cin >> n;
    int m = 0;
    for (int i = 0; i < 2*n; i++)
    {
        int x;
        cin >> x;
        if (x == 1) m++;
    }
    int mi = m % 2;
    int ma;
    if (m < n) ma = m;
    else ma = 2*n - m;
    cout << mi <<  " " << ma << endl;
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