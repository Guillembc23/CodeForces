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
    int n;
    cin >> n;

    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i*(2*i - 1);
    }
    
    cout << s <<" " << 2*n <<  endl;

    for (int i = 0; i < n; i++)
    {
        cout << 1 << " " << n - i;
        for (int j = 1; j <= n; j++)
        {
            cout << " " << j;
        }
        cout << endl;
        cout << 2 << " " << n - i;
        for (int j = 1; j <= n; j++)
        {
            cout << " " << j;
        }
        cout << endl;
    }
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