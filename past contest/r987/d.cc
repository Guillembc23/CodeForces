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
    }
    vi b(n);
    b[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
      b[i] = min(a[i],b[i+1]);
    }
    int curr_ma = -1;
    vi sol(n,-1);
    for (int i = 0; i < n; i++)
    {
      curr_ma = max(curr_ma,a[i]);
      if (i == n-1 or b[i+1] >= curr_ma) {
        sol[i] = curr_ma;
      }
    }
    for (int i = n-1; i >= 0; i--)
    {
      if (sol[i] == -1) sol[i] = sol[i+1]; 
    }
    for (int i = 0; i < n; i++)
    {
      if (i > 0) cout << " ";
      cout << sol[i];
    }
    cout << endl;
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