#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i+2 < n; i++)
    {
        if (s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2]) {
            cout << s[i] << s[i+1] << s[i+2] << endl;
            return;
        }
    }
    for (int i = 0; i+1 < n; i++)
    {
        if (s[i] == s[i+1]) {
            cout << s[i] << s[i+1] << endl;
            return;
        }
    }
    cout << -1 << endl;
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