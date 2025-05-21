#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n, k;
    cin >> n >> k;
    int kk = k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int sol = 0;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        k -= (a[i]-ma)*(n-i);
        ma = a[i];
        if(k > 0) sol++;
    }
    cout << kk + sol << endl;
    
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