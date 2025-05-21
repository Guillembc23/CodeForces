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
    vi a(2*n+1,0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            if (k < 0) {
                a[i-j+n-1] = max( a[i-j+n-1] , -k);
            }
        }
        
    }
    int sol = 0;
    for (int i = 0; i < 2*n+1; i++)
    {
        sol += a[i];
    }
    cout << sol << endl;
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