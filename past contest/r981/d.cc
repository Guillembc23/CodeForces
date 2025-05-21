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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0) a[i] += a[i-1];
    }
    set<int> S;
    int found = 0;
    S.insert(0);
    for (int i = 0; i < n; i++)
    {
        if (S.find(a[i]) != S.end()) {
            found++;
            S.clear();
        }
        S.insert(a[i]);
    }
    cout << found << endl;
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