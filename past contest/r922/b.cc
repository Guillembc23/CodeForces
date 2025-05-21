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

bool cmp (pair<int,int> p1, pair<int,int>p2) {
    return p1.first + p1.second < p2.first + p2.second;
}

void solve() {
  int n;
  cin >> n;
  vector<pair<int,int>> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i].first;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> a[i].second;
  }
  sort(a.begin(),a.end(),cmp);
  for (int i = 0; i < n; i++)
  {
    if (i > 0) cout << " ";
    cout << a[i].first;
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    if (i > 0) cout << " ";
    cout << a[i].second;
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