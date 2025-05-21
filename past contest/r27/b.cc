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
    if (n == 1 or n == 3) cout << -1 << endl;
    else if (n == 2) cout << 66 << endl;
    else {
        string s = "66";
        if (n % 2 == 1) s = "363" + s;
        while (s.size() < n) s = "33" + s;
        cout << s << endl;
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