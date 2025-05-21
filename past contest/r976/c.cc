#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int rec (int b, int c, int d) {
    if (b == 0 and c == 0 and d == 0) return 0;
    int bb = b%2;
    int cc = c%2;
    int dd = d%2;
    int digit = 0;
    if (bb == 0) {
        digit = dd;
    } else {
        digit = 1 - dd;
    }
    return 2*rec(b/2,c/2,d/2) + digit;
}

void solve() {
    int b, c, d;
    cin >> b >> c >> d;
    int ans = rec(b,c,d);
    int wat = (ans | b) - (ans & c);
    if (wat == d) cout << rec(b,c,d) << endl;
    else cout << -1 << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}