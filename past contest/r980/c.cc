#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pp pair<int,int>


void solve() {
    int n;
    cin >> n;
    vector<pair<pp,pp>> a;
    for (int i = 0; i < n; i++)
    {
        int b, c;
        cin >> b >> c;
        int mi = min(b,c);
        int ma = max(b,c);
        a.pb({{mi,ma},{b,c}});
    }
    sort(a.begin(),a.end());
    bool first = true;
    for (int i = 0; i < n; i++)
    {
        if (first) first = false;
        else cout << " ";
        cout << a[i].second.first << " " << a[i].second.second;
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