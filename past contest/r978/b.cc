#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
    int n, x;
    cin >> n >> x;
    int tot = 0;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ma = max(a,ma);
        tot += a;
    }
    int div = ceil(1.0*tot/x);
    cout << max(ma,div) << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}