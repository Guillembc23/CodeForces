#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//

struct casilla {
    int x, y;
    int n;
}

void solve() {
    int n, q;
    cin >> n >> q;
    set<casilla> path;
    casilla a;
    a.x = 0;
    a.y = 0;
    a.n = 0;
    path.insert(a);
    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        a.n++;
        if (s == 'U') a.y++;
        else if (s == 'R') a.x++;
        else if (s == 'D') a.y--;
        else a.x--;
    }
    
}
//
//
//

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}