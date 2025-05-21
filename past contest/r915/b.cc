#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/

void solve() {
  int n;
  cin >> n;
  vi deg(n,0);
    int x,y;
  for (int i = 0; i < n - 1; i++)
  {
    cin >> x >> y;
    deg[x-1]++;
    deg[y-1]++;
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (deg[i] == 1) count ++;
  }
  cout << count/2 + count%2 << endl;
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