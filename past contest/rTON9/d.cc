#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

vi primedivs(1e5+1,0);

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vi sol(n+1);
    for (int i = 1; i <= n; i++)
    {
        if (m-1-primedivs[i] < 0) {
            cout << -1 << endl;
            return;
        }
        sol[i] = a[m-1-primedivs[i]];
    }
    for (int i = 1; i <= n; i++)
    {
        if (i > 1) cout << " ";
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

  for (int i = 1; i <= 1e5; i++)
  {
    for (int j = 2; i*j <= 1e5; j++)
    {
        primedivs[i*j] = max(primedivs[i*j],primedivs[i]+1);
    }
  }
  

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}