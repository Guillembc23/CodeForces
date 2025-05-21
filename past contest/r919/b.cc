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

bool comp (int a, int b) {return a > b;}

void solve() {
  int x, k, n;
  cin >> n >> k >> x;
  vi a(n);
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    res += a[i];
  }
  sort(a.begin(), a.end(), comp);
  int pen = 0;
  for (int i = 0; i < x; i++)
  {
    pen += a[i];
  }
  int curr = res - 2*pen;
  int best = curr;
  for (int i = 0; i < k; i++)
  {
    if(i+x < n) curr += a[i]-2*a[x + i];
    else curr += a[i];
    best = max(curr,best);
  }
  cout<< best << endl;
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