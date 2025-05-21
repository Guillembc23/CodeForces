#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
//
//

void solve() {
  int n, m;
  cin >> n >> m;
  vvi menu(n, vi(m));

  map<int, int> x, y;
  set<int> notvisited;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> menu[i][j];
      x[menu[i][j]] = i;
      x[menu[i][j]] = j;
      notvisited.insert(menu[i][j]);
    }
  }

  while (not notvisited.empty()) {
    int k = *notvisited.begin();
    set<int> bound;
    bound.insert(k);
  }
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