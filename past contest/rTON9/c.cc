#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int x, m;
    cin >> x >> m;
    int caunt = max(m/x - 1,(int)(0));
    int count = 0;
    for (int i = 1; i <= min(2*x,m); i++)
    {
        if (i != x) {
            int z = i^x;
            if (z % i == 0) count++;
        }
    }
    cout << count << " " << caunt << endl;
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