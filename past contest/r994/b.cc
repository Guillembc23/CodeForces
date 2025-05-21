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
    int p = n;
    int s = -1;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'p') p = min(p,i);
        if (c == 's') s = max(s,i);
    }
    //cout << p << " " << s << endl;
    if (p < s) cout << "NO" << endl;
    else {
        if (p != n and s != -1 and s != 0 and p != n-1) cout << "NO" << endl;
        else cout << "YES" << endl;
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