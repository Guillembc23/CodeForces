#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define pb push_back

using namespace std;



void solve() {
    int n, m;
    cin >> n>> m;
    vvi tab (n, vi(m,0));
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if (c == '#') tab[i][j] = 1;
    }
    string s;
    cin >> s;
    int x
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  int tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
}