#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

int xifres ( int a, int b) {
    if (a==b) return 0;
    else if (a%2 == b%2) return xifres(a/2, b/2) +1;
    else return 0;
}

int pow (int n) {
    if (n== 0) return 1;
    else if (n == 1) return 2;
    else return pow (n/2)*pow(n-n/2);
}

void solve() {
  int n;
  cin >> n;
  int x,y;
  cin >> x >> y;
  int z = xifres(x,y);
  for (int i = 2; i < n; i++)
  {
    cin >> y;
    z = min(z, xifres(x,y));
  }
  cout << pow(z+1) << endl;
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