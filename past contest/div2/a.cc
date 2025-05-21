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


void solve() {
    int k, q;
    cin >> k >> q;
    int l = q;
    int a;
    cin >> a;
    while(--k) {
        int x;
        cin >> x;
    }
    while(q--){
        if (q != l-1) cout << " ";
        int x;
        cin >> x;
        cout << min(x,a-1);
    }
    cout << endl;
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