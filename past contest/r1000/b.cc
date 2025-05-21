#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n, l, r;
    cin >> n >> l >>r ;
    l--;
    r--;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vi b, c;
    for (int i = 0; i <= r ; i++)
    {
        b.pb(a[i]);
    }
    for (int i = l; i < n; i++)
    {
        c.pb(a[i]);
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int sol1 = 0;
    int sol2 = 0;
    for (int i = 0; i < r - l + 1; i++)
    {
        sol1 += b[i];
        sol2 += c[i];
    }


    cout << min(sol1,sol2) << endl;
    
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