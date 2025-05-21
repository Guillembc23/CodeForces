#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define pb push_back

using namespace std;

const int MOD = 1e9+7;

void posmod (int &a) {
    a %= MOD;
    if (a < 0) a += MOD;
}

void solve() {
    int n, r, g, b;
    cin >> n >> r >> g >> b;
    vi red(n+1,1);
    vi green(n+1,1);
    vi blue(n+1,1);
    queue<int> qr;
    queue<int> qg;
    queue<int> qb;
    qr.push(1);
    qg.push(1);
    qb.push(1);
    for (int i = 2; i <= n; i++)
    {
        red[i] = red[i-1] + blue[i-1] + green[i-1];
        green[i] = red[i-1] + blue[i-1] + green[i-1];
        blue[i] = red[i-1] + blue[i-1] + green[i-1];
        qr.push(blue[i-1] + green[i-1]);
        qg.push(red[i-1] + blue[i-1] );
        qb.push(red[i-1]  + green[i-1]);
        if (qr.size() > r) {
            red[i] -= qr.front();
            qr.pop();
        }
        if (qg.size() > g) {
            green[i] -= qg.front();
            qg.pop();
        }
        if (qb.size() > b) {
            blue[i] -= qb.front();
            qb.pop();
        }
        posmod(red[i]);
        posmod(blue[i]);
        posmod(green[i]);
    }
    cout << (red[n] + blue[n] + green[n] )%MOD<< endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  int tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
}