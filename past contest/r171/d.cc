#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int INF = 1e16;

void solve() {
  int n;
  cin >> n;
  vi a(n);
  vi s(n);
  vi ss(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i > 0)
      s[i] = a[i] + s[i - 1];
    else
      s[i] = a[i];

    if (i > 0)
      ss[i] = s[i] + ss[i - 1];
    else
      ss[i] = s[i];
  }
  cout << ss[n-1] << endl;
  vi block(n);
  for (int i = 0; i < n; i++) {
    if (i < 2)
      block[i] = ss[n - 1] - (n - i) * s[i];
    else
      block[i] = ss[n - 1] - ss[i - 2] - (n - i+1) * s[i-1];
  }
  for (int i = 0; i < n; i++)
  {
    cout << block[i] << endl;
  }
  
  int q;
  cin >> q;
  vector<pair<int, int>> queries(q);
  vi uq;
  for (int i = 0; i < q; i++) {
    cin >> queries[i].first >> queries[i].second;
    queries[i].first -= 2;
    queries[i].second--;
    if (queries[i].first > 0) uq.pb(queries[i].first);
    uq.pb(queries[i].second);
  }
  sort(uq.begin(),uq.end());
  cout << "here" << endl;
  map<int, int> res;
  int curr = 0;
  int x = n+1, y = 0;
  for (int i = 0; i < uq.size(); i++) {
    int xx = n-x+1;
    while ((n - x  +1 + 1) * (n + x -1) / 2 <= uq[i] and x >= 0) {
      x--;
      curr += block[xx];
      xx = n-x+1;
    }
    y = uq[i] - (n - x + 1) * (n + x) / 2;
    if(x > 0) res[uq[i]] = curr+ss[x+y+1] - ss[x-1] - (y+1)*s[x];
    else res[uq[i]] = curr+ss[x+y+1] - (y+1)*s[x];
    cout << uq[i] << " " << curr << endl;
    cout << res[uq[i]] << endl;
  }
  res[-1] = 0;
  /*
  for (int i = 0; i < q; i++)
  {
    cout << res[queries[i].second] - res[queries[i].first] << endl;
  }
  */
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
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}