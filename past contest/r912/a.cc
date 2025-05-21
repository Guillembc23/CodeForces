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
  int n, m;
  cin >> n >> m;
  int x, y;
  bool ordered = true;
  cin >> x;
  for (int i = 1; i < n; i++) {
    cin >> y;
    if (y < x) ordered = false;
    x = y;
  }

  if (m == 1 and not ordered)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}