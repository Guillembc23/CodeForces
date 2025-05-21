#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
#define int long long
const int MOD = 998244353;

int mp(int a, int b, int c) {
    return a*a + b*b + c*c + 7*min(a,min(b,c));
}

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << max(mp(a,b,c+d), max(mp(a+d,b,c) ,mp(a,b+d,c))) << endl;
}
//
//
//

signed main() {
  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}