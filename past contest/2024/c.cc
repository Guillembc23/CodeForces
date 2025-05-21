#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;
const int inf = 1e9;


void solve() {
  int n;
  cin >> n;
  int up = inf, down = inf;
  int pen = 0;
  int x;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (down > up) {
        if (up >= x) up = x;
        else if (down >= x) down = x;
        else {
            pen++;
            up = x;
        }
    } else {
        if (down >= x) down = x;
        else if (up >= x) up = x;
        else {
            pen++;
            down = x;
        }
    }
  }
  
  cout << pen << endl;
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