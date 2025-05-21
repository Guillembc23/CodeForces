#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back



void solve() {
    int n;
    cin >> n;
    vi a(n);
    int mapar = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 1) mapar = max(mapar,a[i]-a[i-1]);
    }
    if (n % 2 == 0) cout << mapar << endl;
    else if (n == 1) cout << 1 << endl;
    else {
        multiset<int> S;
        for (int i = 2; i < n; i+= 2)
        {
            S.insert(a[i]-a[i-1]);
        }
        int best = *(--S.end());
        for (int i = 0; i < n-1; i+= 2)
        {
            S.insert(a[i+1]-a[i]);
            S.erase(S.find(a[i+2]-a[i+1]));
            best = min(best,*(--S.end()));
        }
        cout << best << endl;
    }
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}