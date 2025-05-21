#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
  int n, m , v;
  cin >> n >> m >> v;
  vi a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  stack<int> pos;
  pos.push(-1);
  int curr = 0;
  for (int i = 0; i < n; i++)
  {
    curr += a[i];
    if (curr >= v) {
        curr = 0;
        pos.push(i);
    }
    if (pos.size() >= m+1) break;
  }
  if (pos.size() < m+1) { // IMPOSIBLE
    cout << -1 << endl;
    return;
  }
  int alice = 0;
  for (int i = pos.top()+1; i < n; i++)
  {
    alice += a[i];
  }
  int best = alice;
  int last = n;
  while (pos.size() > 1) {
    int i = pos.top();
    pos.pop();
    while (i > pos.top()) {
        alice += a[i];
        i--;
    }
    int cur = 0;
    while (cur < v) {
        last--;
        if (last < 0) {
            cout << best << endl;
            return;
        }
        cur += a[last];
        alice -= a[last];
    }
    best = max(best,alice);
  }
  
  cout << best << endl;
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