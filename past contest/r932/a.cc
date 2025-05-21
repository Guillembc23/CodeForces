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

struct mesage {
  int a, b;
};

void solve() {
  int n, l;
  cin >> n >> l;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].second >> v[i].first;
  }

  sort(v.begin(),v.end());

  int ans = 0;
  for (int i = 0; i < n; i++) {
    priority_queue<int> q;
    int cur = 0;
    for (int j = i; j < n; j++) {
      q.push(v[j].second);
      cur += v[j].second;
      while (not q.empty() and v[j].first - v[i].first + cur > l) {
        cur -= q.top();
        q.pop();
      }
      ans = max(ans, (int)q.size());
    }
  }

  cout << ans << endl;
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