#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
const int AL = int('z') - int('a');
//
//
//

void solve() {
  int n;
  cin >> n;
  vi t(AL + 1, 0);
  for (int i = 0; i < n; i++)
  {
    char a;
    cin >> a;
    t[int(a)- int('a')]++;
  }

  int maxi = t[0];

  for (int i = 0; i < AL + 1; i++)
  {
    maxi = max(t[i], maxi);
  }

  if (2*maxi > n) cout << 2*maxi - n << endl;
  else cout << n%2 << endl;
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