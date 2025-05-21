#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int q;
  cin >> q;
  vi tree(1);
  tree[0] = 0;
  vi value(1);
  value[0] = 0;
  int size = 1;
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      x--;
      tree.push_back(x);
      value.push_back(0);
      size++;
      while (x != 0) {
      }
    } else {
      int x, y;
      cin >> x >> y;
      x--;
      value[x] += y;
    }
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