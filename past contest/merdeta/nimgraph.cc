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
int nimber_line (int n, int l) {
    return n/l;
}

int nimber_cycle(int n, int l, int r) {
    if (n-r >= l) return 0;
    else return nimber_line (n-l,l);
}

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    si not_visited;
    for(int i = 0; i < n; ++i) not_visited.insert(i);

    vi next(n,-1);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y) swap (x,y);
        
    }

    int nim = 0;
    while (not not_visited.empty()) {
        int v = *not_visited.begin();
        int count = 1;
        int u = next[v];
        not_visited.erase(v);
        while( u != v) {
            count++;
            not_visited.erase(u);
            u = next[u];
        }
        nim = nim ^ nimber_cycle(count,l,r);
    }

    if (nim == 0) cout << "Bob" << endl;
    else cout << "Alice" << endl;
}
//
//
//

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}