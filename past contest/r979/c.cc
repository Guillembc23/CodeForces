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
    string s;
    cin >> s;
    bool guanya = false;
    if (s[0] == '1') guanya = true;
    if (s[n-1] == '1') guanya = true;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1' and s[i-1] == '1') guanya = true;
    }
    if (guanya) cout << "YES" << endl;
    else cout << "NO" << endl;
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