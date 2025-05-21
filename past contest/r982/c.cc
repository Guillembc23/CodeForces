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
    priority_queue<pair<int,int>> Q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Q.push({-(x-(n-i)),i});
    }
    int ma = 0;
    priority_queue<int> C;
    C.push(0);
    while (not C.empty()) {
        int c = -C.top();
        ma = max(c,ma);
        C.pop();
        while (not Q.empty() and c >= -Q.top().first) {
            if (c == -Q.top().first) {
                C.push(-(c+Q.top().second));
            }
            Q.pop();
        }
    }
    cout << ma+ n << endl;
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