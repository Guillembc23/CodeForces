#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  cout.setf(ios::fixed);
  cout.precision(7);
  double n, k;
  double d, s;
  cin >> n >> k >> d >> s;
  double result = (n*d - k*s)/(n - k);
  if(result < 0 or result > 100) cout << "impossible" << endl;
  else cout << result << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}