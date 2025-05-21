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
    int n;
    cin >> n;
    vi a(n), b(n);
    vi c(3,0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i%3] += a[i];
    }
    vi d(3,0);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        for (int j = 0; j < 3; j++)
        {
            d[(i+j)%3] += c[j%3]*b[i];
        }
    }
    cout << d[1] << " " << d[2] << " " << d[0] << endl;
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