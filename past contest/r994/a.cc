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
    vi a(n);
    int nonzeros = 0;
    int changes = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (changes == 1 and a[i] != 0) changes = 2;
        if (changes == 0 and nonzeros > 0 and a[i] == 0) changes = 1;

        if (a[i] != 0) nonzeros++;
    }
    if (nonzeros == 0) cout << 0 << endl;
    else if (changes == 2) cout << 2 << endl;
    else cout << 1 << endl;
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